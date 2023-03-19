#include<iostream>
using namespace std;

int main(){

    std :: cout << "Hello Cpp" << std :: endl;
    // :: is scope resolution operator
    // << insertion operator 
    // cout object is present in iostream 

    int x  = 5, y = 10, z; 
    // z  = x++ * y;
    z  = ++x * y;
    cout << z << endl; 
    cout << x << endl; 
    cout << (~25);

    return 0;
}