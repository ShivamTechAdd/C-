#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the noumber:-";
    cin>>n;
    int m=n-1;         //new lines other then first line .

    // 1 2 3 4 5 6 7
    // 1 2 3   5 6 7
    // 1 2       6 7
    // 1           7

    int nsp=1;
    //outer all 2n-1 noumbers.
    for(int st=1;st<=2*n-1;st++){   //1 2 3 4 5 6  7  when n=4 .
        cout<<st;
    }
    cout<<endl;

    for(int i=1;i<=m;i++){
        //noumber triangle
        int a=1;
        for(int j=1;j<=m+1-i;j++){
            cout<<a;
            a++;
        }

        //noumber spaces
        for(int k=1;k<=nsp;k++){
            cout<<" ";
            a++;
        }
        nsp+=2;

        //star triangle
         for(int j=1;j<=m+1-i;j++){
            cout<<a;
            a++;
        }

        cout<<endl;
    }
    
}