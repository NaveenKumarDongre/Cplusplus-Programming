#include<iostream>
using namespace std;


int main(){

    int a[10];


    cout << a << endl;
    cout << &a[0] << endl;

    a[0] = 5;
    a[1] = 10;

    cout << *a << endl;
    cout << *(a+1) << endl;

    //Dumb C++ yaar 
    cout << 1[a] << endl;
    cout << 0[a] << endl;


    cout << sizeof(a) << endl;

    int *p  = a + 1;



    return 0;
}