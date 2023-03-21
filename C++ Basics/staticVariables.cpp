#include<iostream>
using namespace std;
int global_variable; 
int main(){

    static int x;
    int b;
    cout << b << endl; //garabage value
    cout << x <<endl;
    cout << global_variable << endl;


    return 0;
}