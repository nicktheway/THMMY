class AndGate{
    public:
    void seta(int n);
    void setb(int n);
    int getOutput();
    private:
    int a, b;
};

class OrGate{
    public:
    void seta(int n);
    void setb(int n);
    int getOutput();
    private:
    int a, b;
};

class NotGate{
    public:
    void seta(int n);
    int getOutput();
    private:
    int a;
};

class SemiSum{
    public:
    void seta(int n);
    void setb(int n);
    int getSum();
    int getCarry();
    private:
    int a, b, s, c;
};
