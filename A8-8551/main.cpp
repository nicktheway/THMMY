/**
 * main.cpp
 * Προγραμματιστικές τεχνικές, άσκηση 8
 * Κύριο πρόγραμμα. 
 * Νικόλαος Κατωμέρης, 8551
 * 18/02/2016
 */

#include <iostream>
using std::cout;
using std::endl;

#include "list.h"

int main(){
    srand(time(0));
    Node<double> A;
    Node<double> B;
    Node<double> C;
    Node<double> D;
    A.add(B);
    B.add(C);
    C.add(D);
    
    Node<int> A1;
    Node<int> B1;
    Node<int> C1;
    Node<int> D1;
    A1.add(B1);
    B1.add(C1);
    C1.add(D1);
    
    auto i = A;
    for (i = A; i.next != 0; i = *i.next){
        cout << i.next << "..." << i.getData() << endl;
    }
    cout << i.next << "..." << i.getData() << endl;
    
    auto j = A1;
    for (j = A1; j.next != 0; j = *j.next){
        cout << j.next << "..." << j.getData() << endl;
    }
    cout << j.next << "..." << j.getData() << endl;
    
    return 0;
}
