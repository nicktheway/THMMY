/**
* calendar.h
* Προγραμματιστικές τεχνικές, 4η εργασία
* Προσθαφαίρεση ημερομηνιών 
* Νικόλαος Κατωμέρης, 8551
* 03/11/2015
*/

#ifndef CALENDAR_H
#define CALENDAR_H

class calendar{
public:
	calendar(); //Απλώς δεσμεύει μνήμη για τα μέλη δεδομένων
	calendar(int d, int m, int y); //Δεσμεύει μνήμη και αρχικοποιεί τα μέλη δεδομένων
	calendar(const calendar& c);
	calendar operator+(const calendar& c); //Υπερφόρτωση του τελεστή + για συμβατότητα με τα αντικείμενα της κλάσης
	calendar operator-(const calendar& c); //Υπερφόρτωση του τελεστή - για συμβατότητα με τα αντικείμενα της κλάσης
	calendar operator=(const calendar& c); //Υπερφόρτωση του τελεστή - για συμβατότητα με τα αντικείμενα της κλάσης
	void getDate(); //Εμφανίζει την ημερομηνία
	~calendar();
private: 
	int* day, *month, *year;
	static const int days[]; //Πίνακας για εκχώρηση του αριθμού των ημερών κάθε μήνα.
	void checkDate(const calendar& c); //Ελέγχει την ορθότητα της ημερομηνίας (δεν ισχύει για δίσεκτα έτη)
};

#endif
