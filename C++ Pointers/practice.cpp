#include<iostream>
using namespace std;

int main(){

    int A[5]{2,4,6,8,10};
    int *p = A, *q = &A[4];

    cout << p <<" " << q << endl;
    cout << q - p << endl;


    return 0;
}