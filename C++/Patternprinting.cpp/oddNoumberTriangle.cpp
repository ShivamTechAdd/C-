#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter noumber:-";
    cin>>n;
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            cout<<a;
            a=a+2;
        }
        cout<<"\n";
    }

    cout<<endl;

    //reverse triangle
    
    int m;
    cout<<"Enter noumber:-";
    cin>>m;
    for(int i=1;i<=m;i++){
        int a=1;
        for(int j=1;j<=(n+1-i);j++){
            cout<<a;
            a=a+2;
        }
        cout<<"\n";
    }
}