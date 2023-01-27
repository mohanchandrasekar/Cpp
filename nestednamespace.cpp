#include<iostream>

using namespace std;

namespace first {
    void get(){
        cout << " The first method is called" << endl;
    }

    namespace second {
        void get(){
            cout << " The second method is called " << endl;
        }
    }
}

using namespace first::second;

int main(int argc, char const *argv[])
{
    get();    
    return 0;
}
