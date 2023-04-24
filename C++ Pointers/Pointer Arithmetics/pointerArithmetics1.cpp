#include<iostream>
using namespace std;

int main(){

    /*
    int *p = 0;
    char *c = 0;
    double *d = 0;
    float *f = 0;

    //So size of all pointer is same irrespective the type of variable
    //whose address it is storing But yaa it really depend on the compiler
    // But the size of a pointer variable is always same.
    cout << sizeof(p) << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(f) << endl;
    */

   //Oprators in pointers 
   int i = 10;
   int *p = &i;

   cout << p << endl; 
   p = p + 1;
   cout << p << endl;
   p--;
   cout << p << endl;


    return 0;
}