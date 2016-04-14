/**
* classes.h
* Προγραμματιστικές τεχνικές, 5η εργασία
* Κλάσεις λογικών πυλών με βάση μια βασική κλάση
* Νικόλαος Κατωμέρης, 8551
* 14/11/2015
*/

#ifndef GATES_H
#define GATES_H

//Βασική κλάση με συναρτήσεις που χρησιμοποιούν όλες οι κλάσεις των πυλών που παράγονται απ' αυτήν
class basic {
public:
	void setA(int a);
	void setB(int b);
	int getA();
	int getB();
private:
	int A, B;
};

class AndGate : public basic{
public: 
	int getOutput();
};

class OrGate : public basic{
public:
    int getOutput();
};

class NotGate : public basic{
public:
    int getOutput();
};

class SemiSum : public basic{
    public:;
    int getSum();
    int getCarry();
    private:
    int s, c;
};

#endif

