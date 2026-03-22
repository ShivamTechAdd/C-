#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the noumber:-";
    cin>>n;
    for(int i=0;i<=n;i++){
        //reverse triangle spaces
        for(int j=1;j<=n-i;j++){
            cout<<"   ";
        }

            //*
            // ***
            // *****
            // *******

        for(int j=1;j<=(2*i-1);j++){        //odd times 
            cout<<" * ";
        }

        cout<<endl;

    }

cout<<endl<<"*************************************."<<endl;

    //Another method  nst & nsp (no of stars and no of spaces).

    //     *
    //    ***
    //   *****
    //  *******
    // *********

    //01. pahli line me n-1 spaces & nsp-- .
    //02. pahli line me 1 stars & nst=nst+2 .
    int nst=1;
    int nsp=n-1;
    for(int i=1;i<=n;i++){
        //spaces loop
        for(int j=1;j<=nsp;j++){
            cout<<"   ";
        }
        nsp--;
        //star loop
        for(int k=1;k<=nst;k++){
            cout<<" * ";
        }
        nst+=2;

        cout<<endl;
        
    }
      
    }
