#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the noumber:-";
    cin>>n;
    for(int i=0;i<=n;i++){
        //reverse triangle spaces +(concate)
        for(int j=1;j<=n-i;j++){
            cout<<"   ";
        }
        //solid rectangle stars
       for(int k=1;k<=n;k++){
        cout<<" * ";
       }
       cout<<endl;
    }
}