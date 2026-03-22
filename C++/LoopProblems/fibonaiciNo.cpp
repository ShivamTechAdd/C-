#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the noumber:-";
    cin>>n;
    int a=1;
    int b=1;
    int sum=0;
    for(int i=1;i<=n-2;i++){
        sum=a+b;    //strats from 1+1=2
        a=b;
        b=sum;
    }
    cout<<"the fibonaici no is:-"<<b;  //sum
}