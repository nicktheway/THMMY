/**
* classes.cpp
* Προγραμματιστικές τεχνικές, 5η εργασία 
* Συναρτήσεις κλάσεων λογικών πυλών
* Νικόλαος Κατωμέρης, 8551
* 13/11/2015
*/

#include "gates.h"

void basic::setA(int a) {
	A = (a != 0);
}

void basic::setB(int b) {
	B = (b != 0);
}

int basic::getA() {
	return A;
}

int basic::getB(){
	return B;
}

int AndGate::getOutput(){
    if (getA() && getB()) return 1;
    else return 0;
}

int OrGate::getOutput(){
    if (getA() || getB()) return 1;
    else return 0;
}

int NotGate::getOutput(){
    if (!getA()) return 1;
    else return 0;
}

int SemiSum::getCarry(){
    AndGate item;
    item.setA(getA());
    item.setB(getB());
    return item.getOutput();
}
int SemiSum::getSum(){
    AndGate item;
    OrGate item2;
    item.setA(getA());
    item.setB(getB());
    item2.setA(getA());
    item2.setB(getB());
    if (!item.getOutput() && item2.getOutput()) return 1;
    return 0;
}
