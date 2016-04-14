/**
 * cata.cpp
 * Αρχείο με την υλοποίηση της κλάσης catalog του αρχείου cata.h
 * Προγραμματιστικές τεχνικές. Άσκηση 11 (10). 
 * Νικόλαος Κατωμέρης, 8551
 * 10/01/2016
 */

#include "cata.h"
#include <string>
#include <cstring>
#include <iostream>
using std::string;

catalog::catalog(const string& namee, long int num){
    name = namee;
    setNumber(num);
}

catalog::catalog(){
    name = "Unknown";
    setNumber(0);
}

//Copy Constructor
catalog::catalog(const catalog& other){
    name = other.name;
    number = new int[5];
    memcpy(number, other.number, 5*sizeof(int));
}

void catalog::setName(const string& namee){
    name = namee;
}

void catalog::setNumber(long int num){
    number = new int[5];
    long int mult = 10000;
    for (int i = 0; i < 5; i++){
        number[i] = num / mult;
        num %= mult;
        mult /= 10;
    }
}

string catalog::getName() const{
    return name;
}

bool catalog::operator<(const catalog& one) const{
    if (this->name.compare(one.name) <= 0){
            return 1;
        }
        else return 0;
}

void catalog::show() const{
    std::cout << name << " ";
    for (int i = 0; i < 5; i++){
        std::cout << number[i];
    }
    std::cout << std::endl;
}

catalog::~catalog(){
    delete []number;
}
