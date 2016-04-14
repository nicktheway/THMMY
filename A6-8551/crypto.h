#ifndef CRYPTO_H 
#define CRYPTO_H

#include <string>
using std::string;

class Crypto {
public:
    string virtual Encryption() = 0;
    string virtual Decryption() = 0;
    Crypto(string msg);
    string getMessage();
    void setMessage(string msg);
    string getEncrypted();
    string getDecrypted();
    
protected:
    string Message;
    string Encrypted;
    string Decrypted;
};

class Cesar: public Crypto{
public:
    Cesar(string msg);
    void setKey(int k);
    int getKey();
    string virtual Encryption();
    string virtual Decryption();
private:
    int key;
};

class XOR : public Crypto{
public:
    XOR(string msg);
    void setKey(char c);
    int getKey();
    string virtual Encryption();
    string virtual Decryption();
private:
    char key;
};

#endif
