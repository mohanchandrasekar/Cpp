#include<iostream>
#include<functional>

using namespace std;

void print_name(){
    cout << "Mohan" << endl;
}

void print_(string value){
    cout << "Result is ::: " << value << endl;
}

int main(int argc, char const *argv[])
{
        
    function<void()> _func = print_name;
    _func();

    function<void(string)> _display = [](string){ print_("Welcome to Func");};

    _display("");

    function<void(string)> _print_void_ = [](string) { print_("Ben");};
    _print_void_("");

    return 0;
}
