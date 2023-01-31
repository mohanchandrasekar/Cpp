#include<iostream>

using namespace std;

class Car {
    private:
    char32_t name;
    public:
    Car(){
        cout << "Constructor is called" << endl;
    }

    ~Car(){
        cout << "Destructor is called" <<endl;
    }
};

int main(int argc, char const *argv[])
{
    
    Car c;
    return 0;
}
