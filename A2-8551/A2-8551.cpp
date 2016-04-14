/**
 * A2-8551.c
 * Προγραμματιστικές τεχνικές, 2η εργασία
 * Κύριο πρόγραμμα 
 * Νικόλαος Κατωμέρης, 8551
 * 18/10/2015
 */
 
#include <iostream>
#include "operations.h"

using namespace std;

int main()
{
    int mode;
    char operation, i;
    float num1, num2;
    complex cnum1, cnum2, z;
    
    cout << "Welcome to myFantasticCalculator v1.0\n"
        << "If you want to use complex numbers press 1.\n"
        << "If you want to use real numbers press 2." << endl;
    cin >> mode;
    if (mode == 1){
        while (cin >> cnum1.re >> cnum1.im >> i >> operation >> cnum2.re >> cnum2.im >> i){
            switch(operation){
                case '+':
                z = add(cnum1.re, cnum2.re, cnum1.im, cnum2.im);
                cout << z.re << showpos << z.im << 'i' << endl;
                break;
                case '-':
                z = sub(cnum1.re, cnum2.re, cnum1.im, cnum2.im);
                cout << z.re << showpos << z.im << 'i' << endl;
                break;
                case '*':
                z = mult(cnum1.re, cnum2.re, cnum1.im, cnum2.im);
                cout << z.re << showpos << z.im << 'i' << endl;
                break;
                case '/':
                if(cnum2.re*cnum2.re + cnum2.im*cnum2.im != 0){
                    complex z = divid(cnum1.re, cnum2.re, cnum1.im, cnum2.im);
                    cout << z.re << showpos <<z.im << 'i' << endl;
                }
                else{
                    cout << "This isn't a valid operation." << endl;
                    continue;
                }
                break;
            }
        }
    }
    else if (mode == 2){
        while (cin >> num1 >> operation >> num2){
            switch(operation){
                case '+':
                cout << add(num1, num2) << endl;
                break;
                case '-':
                cout << sub(num1, num2) << endl;
                break;
                case '*':
                cout << mult(num1, num2) << endl;
                break;
                case '/':
                if(num2)
                    cout <<divid(num1, num2) << endl;
                else{
                    cout << "This isn't a valid operation." << endl;
                    continue;
                }
                break;
            }
        }
    }
    return 0;
}
