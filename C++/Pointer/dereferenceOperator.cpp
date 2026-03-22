#include<iostream>
using namespace std;
int main(){
    int x=4;
    int* p1= &x; //understand int* as a datatype.
    cout<<x<<endl;
    *p1=6;
    cout<<x<<endl;
    cout<<*p1<<endl;

}