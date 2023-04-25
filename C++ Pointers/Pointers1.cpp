#include<iostream>
using namespace std;

int main(){

    // Data variable
    int x = 10; 

    // Address variable 
    int* p; 
    p = &x; 

    cout << p << endl; 
    cout <<  x << endl; 
    cout << *p << endl;
    (*p++);
    cout << p << endl;
    cout << *p << endl;
    (*p)++; 

    cout << x << endl;
    
    return 0;
}