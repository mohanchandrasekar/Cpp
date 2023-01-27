#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Car {
    private:
        string name;
    public:
        void print_name(string name){
            cout << "The name is :: " << name << endl;
        }
        int get_roll_number();
};
int Car::get_roll_number(){
    return 121; 
}

int main(int argc, char const *argv[])
{
    Car car;
    string name = "Chandrasekar";
    car.print_name(name);
    cout << car.get_roll_number() << endl;
    return 0;
}
