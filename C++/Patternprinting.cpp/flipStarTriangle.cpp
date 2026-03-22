#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of rows:-";
    cin>>n;
    for(int i=1;i<=n;i++){
        //hashes
        for(int j=1;j<=n-i;j++){
            cout<<"   ";
        }
        //stars
        for(int k=1;k<=i;k++){
            cout<<" * ";
        }
        cout<<"\n";
    }

    //flip no triangle

    int m;
    cout<<"Enter no of rows:-";
    cin>>m;
    for(int i=1;i<=m;i++){
        //hashes
        for(int j=1;j<=m-i;j++){
            cout<<" ";
        }
        //stars
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        cout<<"\n";
    }

    //flip star triangle method 2
    int num;
    cout<<"Enter no of rows:-";
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            if((i+j)>=n+1) cout<<" * ";
            else cout<<"   ";
        }
        cout<<"\n";
    }
}