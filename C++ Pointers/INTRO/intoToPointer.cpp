#include<iostream>
using namespace std;

int main(){


    int i = 10;
    /*
    Three steps for the decalare the i variable
    1. Memory allocaton of i
    2. Entry or assigining value
    3. Filling the assigned value

    We had a concept of symbol table which tells us 
    where assigns a specific address to the various symbol.
    
    */
    
    cout << i << endl;

    // & this symbol helps in finding the address 
    // a particular variable

    cout << &i << endl; 

    /*

    Concept of pointers 
    1. Pointer are variables which stores the address of other variable.
    */

   int * p = &i;
   // we can say p is a pointer to an integer 
   cout << p <<" "<< &i << endl;

   float f = 10.2f;
   float *pf = &f; 

// Using the dereferance operator I can access the value aviable
// at the address nice (*p)
   cout << *pf << endl;
   cout << pf << endl;

   *pf = 100.3;
   cout << f << endl;




    return 0;
}