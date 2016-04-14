/**
* main.cpp
* Προγραμματιστικές Τεχνικές, 7η εργασία
* Κύριο Πρόγραμμα
* Νικόλαος Κατωμέρης, 8551
* 30/11/2015
*/

#include "safetable.h"

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    safetable table1;
    int tryvalues1[] = {1, 2, 14};
   
    for (int i = 0; i < 3; i++){
        try{
            int n = table1[tryvalues1[i]];
            cout << "Value of A[" << tryvalues1[i] << "]:"<< n <<endl;
        }
        catch (MyOutofBoundException & excep){
            cout << excep.what();
        }
    }
    
    safetable table2(20);
    int tryvalues2[] = {1, 2, 32};
    
    for (int i = 0; i < 3; i++){
        try{
            int n = table2[tryvalues2[i]];
            cout << "Value of A[" << tryvalues2[i] << "]:"<< n <<endl;
        }
        catch (MyOutofBoundException & excep){
            cout << excep.what();
        }
    }
    return 0;
}
