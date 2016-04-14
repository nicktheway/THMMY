/**
 * classes.cpp 
 * Προγραμματιστικές τεχνικές, άσκηση 10
 * Άρχείο συναρτήσεων κλάσης employee του αρχείου classes.h
 * Νικόλαος Κατωμέρης, 8551
 * 21/12/2015
 */

#include "classes.h"
#include <fstream>
#include <string>

using namespace std;

employee::employee(string name, double salary){
	this->name = name;
	this->salary = salary;
}

void employee::setName(string nam){
	name = nam;
}

void employee::setSalary(double sal){
	salary = sal;
}

string employee::getName(){
	return name;
}

double employee::getSalary(){
	return salary;
}

employee::~employee(){
}

string myException::what(){
	return "Exception happened\n";
}
