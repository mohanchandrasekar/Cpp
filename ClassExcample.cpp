#include<iostream>

using namespace std;

namespace first {
    void get(){
        cout << " First method is called "<< endl;
    }
}

namespace second {
    void get(){
        cout << "Second method is called" << endl;
    }
}
class Arrow{

    private:
    int n =14;
    public:
    int getValue(){
    return n;
    }
};

using namespace first;

int main(int argc, char const *argv[])
{
    Arrow arrow;
    cout << arrow.getValue() << endl;

    get();
    
    return 0;
}
