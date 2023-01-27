#include<iostream>

using namespace std;

class Parent {
    
    public:
    int i;
    char32_t n;
    int get();
    Parent(){
        cout << "COnstructor is called" << endl;
    }
};

int Parent::get(){
    return 11;
}

class Child : public Parent {
     
     public:
     int id;
     Child(){
        cout << "Child constructor is called";
     }
};

int main(int argc, char const *argv[])
{
    Child ca;
    ca.i =10;
    return 0;
}
