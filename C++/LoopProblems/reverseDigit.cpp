#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the digit:-";
    cin>>n;                      //123
    int rev=0;
    while(n>0){
        int lastDigit=n%10;
        rev*=10;
        rev=rev+lastDigit;
        n=n/10;
    }
    cout<<"The reverse of digit is :-"<<rev;
}