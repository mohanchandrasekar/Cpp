#include<iostream>
#include<string>

using namespace std;

class Person {
    int id;
    string name;

    public:
    void set_p();
    void display_p();

};

void Person::set_p(){
    cout << "Enter the ID" << endl; 
    cin >> id;
    fflush(stdin);
    cout << "Enter the name" << endl;
    getline(cin, name);
}

class Student : private Person {
    string cource;
    int fees;
    public:
    void set_s();
    void display_s();
};

void Student::set_s(){
    set_p();
    cout << "Enter the Course" << endl;
    fflush(stdin);
    getline(cin,cource);
    cout << "Enter the fees" << endl;
    cin >> fees ;
}

void Student::display_s(){
    display_p();
   cout << cource << endl;
}

void Person::display_p(){
    cout << endl << id << name << endl;
}

int main(int argc, char const *argv[])
{

    Student s;
    s.set_s();
    s.display_s();   
    return 0;
}
