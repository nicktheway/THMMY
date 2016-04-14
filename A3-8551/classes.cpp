#include "classes.h" 

void AndGate::seta(int n){
    if (n) a = 1;
    else a = 0;
}
void AndGate::setb(int n){
    if (n) b = 1;
    else b = 0;
}
int AndGate::getOutput(){
    if (a && b) return 1;
    else return 0;
}

void OrGate::seta(int n){
    if (n) a = 1;
    else a = 0;
}
void OrGate::setb(int n){
    if (n) b = 1;
    else b = 0;
}
int OrGate::getOutput(){
    if (a || b) return 1;
    else return 0;
}
void NotGate::seta(int n){
    if (n) a = 1;
    else a = 0;
}
int NotGate::getOutput(){
    if (!a) return 1;
    else return 0;
}
void SemiSum::seta(int n){
    if (n) a = 1;
    else a = 0;
}
void SemiSum::setb(int n){
    if (n) b = 1;
    else b = 0;
}
int SemiSum::getCarry(){
    AndGate item;
    item.seta(a);
    item.setb(b);
    return item.getOutput();
}
int SemiSum::getSum(){
    AndGate item;
    OrGate item2;
    item.seta(a);
    item.setb(b);
    item2.seta(a);
    item2.setb(b);
    if (!item.getOutput() && item2.getOutput()) return 1;
    return 0;
}
