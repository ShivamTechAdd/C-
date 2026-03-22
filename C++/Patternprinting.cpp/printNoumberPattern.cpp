#include<iostream>
using namespace std;
int main(){
    int rows,columns;
    cout<<"Enter The no of rows:-";
    cin>>rows;

    for(int i=0;i<rows;i++){
        for(int j=1;j<=rows;j++){
            cout<<j;
        }
        cout<<"\n";
    }

}