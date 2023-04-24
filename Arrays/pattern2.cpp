#include<iostream>
using namespace std;

/*

*
**
***
****

*/

int main(){

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(i >= j){
                cout << "*" << " ";
            }
        }cout << endl;
    }
    cout << endl; 

    cout << "Pattern 2" << endl; 


    /*
    
    * * * *
      * * *
        * *
          *
    */

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(i > j){
                cout << " " << " ";
            }else{
                cout << "*" << " ";
            }

        }cout << endl;
    }

    cout << endl; 

    cout << "Pattern 3" << endl; 

    /*
          *
        * *
      * * *
    * * * * 
    
    
    */

   for(int i = 0; i < 4; i++){
    for(int j  = 0; j < 4; j++){
        if(j >= (4 - i - 1)){
            cout << "*" << " ";
        }else{
            cout << " " << " ";
        }
    }cout << endl;
   }


    return 0;
}