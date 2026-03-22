#include<iostream>
using namespace std;
int main(){
    int x=4;
    int* p1= &x; //understand int* as a datatype.
    float y=3;
    float* p2=&y;

    cout<<&x<<endl;
    cout<<p1<<endl;

    cout<<&y<<endl;
    cout<<p2;
}