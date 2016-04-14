/**
* main.cpp
* Προγραμματιστικές τεχνικές, 5η εργασία
* Κύριο πρόγραμμα 
* Νικόλαος Κατωμέρης, 8551
* 14/11/2015
*/

#include <iostream>
#include "gates.h"
using namespace std;

int main()
{
    int i, j;   //Μεταβλητές για τις τιμές καθορισμού set
	//Δημιουργία ενός αντικειμένου για κάθε κλάση
    AndGate item;
    OrGate item2;
    NotGate item3;
    SemiSum item4;
    
    cout << "AND table of truth:\nA   B   Res\n";
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++){
            item.setA(i);
            item.setB(j);
            cout << i << "   " << j << "    " << item.getOutput() << endl;
        }
    }
    cout << "OR table of truth:\nA   B   Res\n";
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++){
            item2.setA(i);
            item2.setB(j);
            cout << i << "   " << j << "    " << item2.getOutput() << endl;
        }
    }
    cout << "NOT table of truth:\nA   Res\n";
    for (i = 0; i < 2; i++) {
        item3.setA(i);
        cout << i << "   " << item3.getOutput() << endl;
    }
    cout << "Semi sum table:\nA   B   Sum   Carry\n";
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++){
            item4.setA(i);
            item4.setB(j);
            cout << i << "   " << j << "    " << item4.getSum() << "      " << item4.getCarry() << endl;
        }
    }
    return 0;
}
