/**
 * main.cpp
 * Προγραμματιστικές τεχνικές, άσκηση 10.
 * Κύριο πρόγραμμα.
 * Νικόλαος Κατωμέρης, 8551
 * 21/12/2015
 */

#include "classes.h" //αρχείο κλάσης employee και myException
#include <fstream> // για είσοδο/έξοδο από αρχεία
#include <iostream> //για το είσοδο και έξοδο στην οθόνη
#include <string> // τύπος string και stod (c++11).
#include <vector> //Για τα vectors 
#include <stdexcept> //Περιέχει την invalid_argument που "πετάει" η stod σε περίπτωση που δεν μπορέσει να μετατρέψει σε double το string.

using namespace std;

int main(){
	vector<employee> data; //Δημιουργία διανύσματος (vector) για πέρασμα των εργαζομένων και των μισθών τους.
	vector<employee>::iterator dataIterator; //Δημιουργία iterator για διάβασμα των τιμών του διανύσματος.
	ifstream myFile("employee.txt"); //διάβασμα του αρχείου employee.txt .
	employee one("", 0); //Δημιουργία αντικειμένου Employee.
	string buffer; //Δημιουργία μεταβλητής για πέρασμα των γραμμών του αρχείου ανεξάρτητα.
	if (myFile.is_open()){
		while (getline(myFile, buffer)){ //Διαβάζει το αρχείο γραμμή προς γραμμή και περνάει τη γραμμή στη μεταβλητή buffer, αν δεν υπάρχει άλλη γραμμή σταματά το διάβασμα.
			int splace = buffer.find(" "); //Εύρεση της θέσης του κενού που χωρίζει το όνομα και το μισθό του εργαζόμενου.
			
			one.setName(buffer.substr(0, splace)); //Πέρασμα του ονόματος του εργαζόμενου στο μέλος δεδομένων name του αντικειμμενου one.
			try {
				one.setSalary(stod(buffer.substr(splace))); //Προσπάθεια περάσματος του μισθου του εργαζομένου στο μέλος δεδομένων salary.
				//Σε περίπτωση αποτυχίας η συνάρτηση stod (c++11) ενεργοποιεί εξαίρεση τύπου invalid_argument.
			}
			catch (const invalid_argument& ex){
				try {
				    throw myException(); //Αυτή η εξαίρεση με τη σειρά της ενεργοποιεί την εξαίρεση myException η δήλωση της οποίας βρίσκεται στο αρχείο classes.h
				}
				catch (myException& exep){
				//cout << exep.what() << endl; //Απενεργοποίηση του σχολίου για εμφάνιση μηνύματος εξαίρεσης.
				//Η εξαίρεση αυτή θεωρεί ότι στο αρχείο employee.txt υπάρχουν το όνομα και ο μισθός του υπαλλήλου με λανθασμένη σειρά <μισθός όνομα>.
				one.setName(buffer.substr(splace + 1)); //Περνάει το όνομα του υπαλλήλου που αυτή τη φορά βρίσκεται μετά το κενό της γραμμής.
				one.setSalary(stod(buffer.substr(0, splace))); //Περνάει το μισθό του υπαλλήλου που αυτή τη φορά βρίσκεται στην αρχή της γραμμής.
				}
			}
			data.push_back(one); //Προσθέτει το στοιχείο στον  πίνακα data.
		}
	}
	else {
	    cout << "File couldn't be opened" << endl;
	}
	
	do{
	    if (data.size() == 20) break;
	    cout << "Give employee's name (or ! to exit): ";
	    string name;
	    cin >> name;
	    if (name == "!") break;
	    one.setName(name);
	    cout << "Give "<< name << "'s salary: ";
	    double salary;
	    cin >> salary;
	    one.setSalary(salary);
	    data.push_back(one);
	}while (1);
	
	double sum = 0; //Μεταβλητή για εκχώρηση του αθροίσματος των μισθών για τον υπολογισμό του μέσου όρου.
	for (dataIterator = data.begin(); dataIterator != data.end(); dataIterator++){
		//cout << dataIterator->getName() << " " << dataIterator->getSalary() << endl; //Απενεργοποίηση του σχολίου για εμφάνιση ονομάτων και μισθών.
		sum += dataIterator->getSalary();
	}
	
	cout << "Mesos oros: " << (sum / data.size()) << endl;

	return 0;
}
