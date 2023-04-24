#include<iostream>
// #include<math.h>
using namespace std;

int maxOfThreeNumber(int a, int b, int c){

    // int max_a_b = max(a,b);
    // return max(max_a_b, c);

    /*if(a > b){
        if(a > c){
            return a;
        }else{
            return c;
        }
    }else{
        if(b > c){
            return b;
        }else{
            return c;
        }

    }*/

    if((a > b) and (a > c)){
        return a;
    } else{
        if(b > c){
            return b;
        }else{
            return c;
        }
    }

}

int maxOfTwoNumber(int a, int b){
    return max(a,b);
}
int main(){

    int x, y, z;
    cout << "Enter 3 numbers: ";
    cin >> x >> y >> z;
    cout << "The maximum of 3 numbers is " << maxOfThreeNumber(x,y,z) << endl;

return 0;
}