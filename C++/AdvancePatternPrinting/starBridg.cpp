#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the noumber:-";
    cin>>n;
    int m=n-1;         //new lines other then first line .

    // *******
    // *** ***
    // **   **
    // *     *
    int nsp=1;
    //outer all 2n-1 stars.
    for(int st=1;st<=2*n-1;st++){   //* * * * * * *  when n=4 .
        cout<<" * ";
    }
    cout<<endl;

    for(int i=1;i<=m;i++){
        //star triangle
        for(int j=1;j<=m+1-i;j++){
            cout<<" * ";
        }

        //star spaces
        for(int k=1;k<=nsp;k++){
            cout<<"   ";
        }
        nsp+=2;

        //star triangle
         for(int j=1;j<=m+1-i;j++){
            cout<<" * ";
        }

        cout<<endl;
    }
    
}