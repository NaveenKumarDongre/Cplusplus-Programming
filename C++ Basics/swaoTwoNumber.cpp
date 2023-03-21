#include<iostream>
using namespace std;

int main(){

    int a ,b;
    cin >> a >> b;
    cout << "Before swapping" << endl;
    cout << "a: " << a << "\n" << "b: " << b <<"\n";
    
    int temp = a;
    a = b;
    b = temp;

    cout << "After swapping" << endl;
    cout << "a: " << a << "\n" << "b: " << b <<"\n";

    return 0; 
}