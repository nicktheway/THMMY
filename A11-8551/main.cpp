/**
 * cata.h
 * Βασικό πρόγραμμα ερωτήματος 1. 
 * Προγραμματιστικές τεχνικές. Άσκηση 11 (10).
 * Νικόλαος Κατωμέρης, 8551
 * 10/01/2016
 */
 
#include <iostream>
#include <string>

#include "cata.h"

using namespace std;

int main(){
    catalog one("Lafas", 45678);
    catalog two;
    catalog third;
    
    
    one.show();
    two.show();

    third.setName("Lala");
    third.setNumber(98765);
    third.show();
    
    return 0;
}
