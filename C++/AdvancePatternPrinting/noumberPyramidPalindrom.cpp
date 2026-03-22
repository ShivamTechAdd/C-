#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the noumber:-";
    cin>>n;

    for(int i=1;i<=n;i++){
        //spaces loop
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        //Normal flip no  triangle loop
        for(int j=1;j<=i;j++){
        cout<<j;
        }
        //palindrom no loop
        for(int l=1;l<=i-1;l++){
            cout<<l;
        }
        cout<<endl;
    }
}