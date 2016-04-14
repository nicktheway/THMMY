/**
 * classes.h 
 * Προγραμματιστικές τεχνικές, άσκηση 10
 * Αρχείο κλάσεων employee, myException
 * Νικόλαος Κατωμέρης, 8551
 * 21/12/2015
 */


#ifndef CLASSES_H
#define CLASSES_H
#include <string>
#include <exception>

using std::string;
using std::exception;

class employee{
public:
	employee(string name, double salary);
	void setName(string nam);
	void setSalary(double sal);
	string getName();
	double getSalary();
	~employee();
private:
	string name;
	double salary;
};

class myException : public exception{
public:
	string what();
};

#endif
