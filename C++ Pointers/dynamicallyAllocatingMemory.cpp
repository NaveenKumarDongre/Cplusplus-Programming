#include<iostream>
using namespace std;

int main(){

    int *p = new int[5];

    for(int i = 0; i < 5; i++){
        p[i] = i+1;
        cout << p[i] << " ";
    }cout << endl;

    // Deallocationg the heap memory
    
    delete[] p; 
    // cout << *p << endl;
    for(int i = 0; i < 5; i++){
        // p[i] = i+1;
        cout << p[i] << " ";
    }cout << endl;



    return 0;
}