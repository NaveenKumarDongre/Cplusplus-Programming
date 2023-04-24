#include<iostream>
using namespace std;

int main(){

    int i = 10;
    int* p = &i;

    int* q = p;

    // cout << sizeof(p) << endl;
    // cout << sizeof(i) << endl;


    // cout << i << endl;
    // cout << *p << endl;

    // i++;

    // cout << i << endl;
    // cout << *p << endl;

    // int a = *p;
    // a++;
    // cout << a << endl;
    // cout << *p << endl;

    i = 23;
    cout << i << endl;
    cout << *p << endl;
    *p = 100;
    cout << i << endl;
    cout << *p << endl;

    (*p)++;
    cout << i << endl;
    cout << *p << endl;
    cout << *q  << endl;



    return 0;
}

