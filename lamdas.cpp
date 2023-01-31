#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v1 = {1,2,3,4,5,6};    
    vector<int> _v2 = {6,7,8,9,0};

    auto result = [&] (int m){
        cout << "Lamdas is called " <<endl;
        v1.push_back(m);
        _v2.push_back(m);
    };

    result(12);
    result(12);
    result(12);

    [v1](){
        for (auto p =v1.begin(); p!=v1.end(); ++p){
            cout << "for is called " <<endl;
            cout << "Result :: "<< *p << endl;
        }
    };

    int N =5;

    vector<int>::iterator p = find_if(v1.begin(),v1.end(),[N](int i) {
        cout << "find_inf is called " << i  <<endl;
        return i > N;
    }); 

    cout << "First number greater than 5 is : " << *p << endl;

    return 0;
}
