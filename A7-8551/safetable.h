/**
* safetable.h
* Προγραμματιστικές Τεχνικές, 7η εργασία
* Διεπιφάνεια των κλάσεων safetable και MyOutofBoundException
* Νικόλαος Κατωμέρης, 8551
* 30/11/2015
*/

#ifndef SAFETABLE_H
#define SAFETABLE_H

#include <exception>
using std::exception;

#include <string>
using std::string;

class safetable{
public:
    safetable();
    safetable(int x);
    int operator [] (int n);
    ~safetable();
private:
    int *array;
    int size;
};

class MyOutofBoundException : public exception{
public:
    string what();
};

#endif
