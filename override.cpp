#include<iostream>

using namespace std;

class Base {
    public:
    virtual void fun(){
        cout << "Base function is called" <<endl;
    }
};

class Derived : public Base {
    void fun() override {
        cout << "Derived function() is called" << endl;
    }
};

int main(int argc, char const *argv[])
{

    Base *b = new Derived();

    b->fun();

    cout << "Compiled successfully" << endl;

    return 0;
}
