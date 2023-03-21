#include<iostream>
#include<typeinfo>
using namespace std;

int main(){

    auto a = 10;
    auto b = 15.5;
    auto c = 5.5f;
    cout << a << "\n" << b << "\n" << c << "\n";
    cout << typeid(a).name() << endl;
    cout << typeid(b).name() << endl;
    cout << typeid(c).name() << endl;


    return 0;
}