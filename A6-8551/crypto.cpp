#include <iostream> 
#include <string>
#include "crypto.h"

using namespace std;

Crypto::Crypto(string msg){
    Crypto::setMessage(msg);
}

string Crypto::getMessage(){
    return Message;
}

void Crypto::setMessage(string msg){
    Message = msg;
}

string Crypto::getEncrypted(){
    return Encrypted;
}

string Crypto::getDecrypted(){
    return Decrypted;
}
    
Cesar::Cesar(string msg) : Crypto(msg){};

void Cesar::setKey(int k){
    key = k;
}
int Cesar::getKey(){
    return key;
}

string Cesar::Encryption(){
    int k, i;
    cout << "Enter key: ";
    cin >> k;
    Cesar::setKey(k);
    char nEncrypted[Message.size()+1]; 
    for (i = 0; Message[i] != '\0'; i++){
        (Message[i] - 'A' <= 25) ? (nEncrypted[i] = ((Message[i] - 'A' + key) % 26) + 'A') : (nEncrypted[i] = ((Message[i] - 'a' + key) % 26) + 'a');
    }
    nEncrypted[Message.size()+1] = '\0';
    Encrypted = nEncrypted;
    return Encrypted;
}

string Cesar::Decryption(){
    char nDecrypted[Encrypted.size()+1];
    for (int i = 0; Message[i] != '\0'; i++)
        (Encrypted[i] - 'A' <= 25) ? (nDecrypted[i] = ((Encrypted[i] - 'A' + 26 - key) % 26) + 'A') : (nDecrypted[i] = ((Encrypted[i] - 'a' + 26 - key) % 26) + 'a');
    Decrypted = nDecrypted;
    return Decrypted;
}

XOR::XOR(string msg) : Crypto(msg){};

void XOR::setKey(char c){
    key = c;
}
int XOR::getKey(){
    return key;
}

string XOR::Encryption(){
    int i;
    char c;
    cout << "Enter key: ";
    cin >> c;
    XOR::setKey(c);
    char nEncrypted[Message.size()+1]; 
    for (i = 0; Message[i] != '\0'; i++){
        nEncrypted[i] = (Message[i] ^ key); 
    }
    nEncrypted[Message.size()+1] = '\0';
    Encrypted = nEncrypted;
    return Encrypted;
}

string XOR::Decryption(){
    char nDecrypted[Encrypted.size()+1];
    for (int i = 0; Message[i] != '\0'; i++)
        nDecrypted[i] = Encrypted[i] ^ key;
    Decrypted = nDecrypted;
    return Decrypted;
}
