#include<iostream>
using namespace std;

int main(){

    cout << "Array tutorial" << endl;

    // Declaring array 
    int arr[5] = {1,2,3,4,5};
    int arr2[5] = {1,2};
    for(auto s: arr)
    cout << s << " ";

    cout << endl;

    for(auto s: arr2)
    cout << s << " ";
    return 0;
}