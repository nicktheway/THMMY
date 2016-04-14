#include <iostream> 
#include "crypto.h"

using namespace std;

int main()
{

    Cesar c_enc("hello");
    c_enc.Encryption();
    
    string resEncCes = c_enc.getEncrypted();
    cout << resEncCes <<endl;

    c_enc.Decryption();
    cout << c_enc.getDecrypted();

    XOR x_enc("hello");
    x_enc.Encryption();
    string resEncXOR = x_enc.getEncrypted(); // pithanotata thelei to x_enc.getEncrypted();
    cout << resEncXOR << endl;

    x_enc.Decryption();
    cout << x_enc.getDecrypted();


return (0);
}
