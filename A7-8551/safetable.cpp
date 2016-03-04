/**
* calendar.cpp
* ����������������� ��������, 7� �������
* ����������� ������� safetable ��� MyOutofBoundException
* �������� ���������, 8551
* 30/11/2015
*/

#include "safetable.h"

#include <string>
using std::string;

safetable::safetable(){
    size = 10;
    array = new int (size);
}

safetable::safetable(int x){
    size = x;
    array = new int (size);
}

int safetable::operator [](int n){
    if (n >= size){
        throw MyOutofBoundException();
    }
}

safetable::~safetable(){
    delete array;
}

string MyOutofBoundException::what(){
    return "Table out of bounds\n";
}