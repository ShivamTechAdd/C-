#include<iostream>
using namespace std;
int main(){
//Reverse Ap display 100 97 94 91 ....1 ->34 terms
//Dhancha method.
int a=100;
//for(int i=1;i<=34;i++){
    //     cout<<a<<" ";
    //     a-=3;
    // }

//condition is optional .

// for(int i=1;a>0;i++){
//      cout<<a<<" ";
//      a-=3;
//     }

    // for(;a>0;){
    //     cout<<a<<" ";
    //     a-=3;
    //    }

    for(int a=100;a>0;a=a-3){
        cout<<a<<" ";
       }

}