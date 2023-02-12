#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 9;

    cout << a << endl;

    //int* m = &a;

    int* i = &a;

    *i =a;

    cout << "i ____________ " <<  *i << endl;

    //cout << m; 

    int x = 10;
 
    // ref is a reference to x.
    int& ref = x;

    cout << ref ;
    return 0;
}
