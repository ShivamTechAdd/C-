#include<iostream>
using namespace std;
int main(){
    // int x=4;
    // int* p1= &x; //understand int* as a datatype.
    // int y=6;
    // int* p2=&y;
    // int sum=*p1+*p2;
    // cout<<sum<<endl;

    //input using pointer.
    int x,y;
    int* p1=&x;
    int* p2=&y;
    cout<<"Enter the value of x:-";
    cin>>*p1;
    cout<<"Enter the value of y:-";
    cin>>*p2;
    cout<<*p1 + *p2;
}