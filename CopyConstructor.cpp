#include<iostream>

using namespace std;

class Person {
    private:
    int x, y;
    public:
    int getX();
    int getY();
     Person(int x1, int y1){
        cout << "Arguments constructor is called" << endl;
     }

     Person(const Person &p){
        cout << "Copy constructor is called" << endl;
        x = p.x;
        y = p.y;
     }
};

int Person::getX(){
    return x;
}

int Person::getY(){
    return y;
}

int main(int argc, char const *argv[])
{
    Person p1(10,11);
    Person p2 = p1;

    cout << "p1.x = " << p1.getX() << "p1.y = " << p1.getY() << endl;
    cout << "p2.x = " << p2.getX() << "p2.y = " << p2.getY() << endl;
    return 0;
}
