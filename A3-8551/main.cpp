#include <iostream> 
#include "classes.h"

using namespace std;

int main()
{
    int i, j;
    AndGate item;
    OrGate item2;
    NotGate item3;
    SemiSum item4;
    
    cout << "AND table of truth:\nA   B   Res\n";
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++){
            item.seta(i);
            item.setb(j);
            cout << i << "   " << j << "    " << item.getOutput() << endl;
        }
    }
    cout << "OR table of truth:\nA   B   Res\n";
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++){
            item2.seta(i);
            item2.setb(j);
            cout << i << "   " << j << "    " << item2.getOutput() << endl;
        }
    }
    cout << "NOT table of truth:\nA   Res\n";
    for (i = 0; i < 2; i++) {
        item3.seta(i);
        cout << i << "   " << item3.getOutput() << endl;
    }
    cout << "Semi sum table:\nA   B   Sum   Carry\n";
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++){
            item4.seta(i);
            item4.setb(j);
            cout << i << "   " << j << "    " << item4.getSum() << "      " << item4.getCarry() << endl;
        }
    }
    return 0;
}
