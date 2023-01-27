#include<iostream>
#include<string>
#include<memory>
#include<vector>
#include<stdlib.h>

using namespace std;

class Rectangle{

    private:
     int length;
     int width;

    public:

    Rectangle(int l, int w){
        length = l;
        width = w;
    } 
    int area(){
        return length * width;
    }

};

int main(int argc, char const *argv[])
{
    shared_ptr<Rectangle> P1(new Rectangle(10,100));
    cout << P1->area() << endl;
    shared_ptr<Rectangle> P2;

    P2 = P1;

    cout << P2->area() << endl;

    cout << P1.use_count() << endl;
    return 0;
}
