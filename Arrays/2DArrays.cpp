#include<iostream>
using namespace std;

int main(){
    int m = 3, n = 3;
    // int A[m][n] = {0};

    int A1[m][n] = {{2,5,9},
                   {1,4,3},
                   {1,4,3}};


    int A2[m][n] = {{2,5,9},
                   {1,4,3},
                   {1,4,3}};


    int mul[m][m] = {0,0,0};

    // for(int i = 0; i < m; i++){
    //     for(int j = 0; j < n; j++){
    //         cout << A1[i][j] + A2[i][j] << " ";
    //     }cout << endl;
    // }

    cout << endl;
    for(int i = 0; i < m; i++){
        // int k = i;
        for(int j = 0; j < m; j++){

            for(int k = 0; k < m; k++){
                mul[i][j] += (A1[i][k]*A2[k][j]);
            }
                
        }cout << endl;
    }

    for(int i = 0; i < m; i++){
        // int k = i;
        for(int j = 0; j < m; j++){
            cout << mul[i][j] << " ";
        }cout << endl;
    }

    cout << endl; 

    for(auto &x: mul){
        for(auto y: x){
            cout << y << " ";
        }cout << endl;
    }


    return 0;
}