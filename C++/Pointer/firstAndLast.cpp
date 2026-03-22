#include<iostream>
using namespace std;
void find(int n,int *p1,int *p2){
    *p2 = n%10;   //lastdigit
    while(n>9){
        n=n/10;
    }
    *p1=n;       //firstdigit
    return;
}

int main(){
    int n;
    cout<<"Enter the noumber:-";
    cin>>n;
    int firstDigit,lastDigit;
    int *ptr1=&firstDigit;
    int *ptr2=&lastDigit;

    find(n,ptr1,ptr2);
    cout<<firstDigit<<" "<<lastDigit;

    //dangling pointer
    //int *p=NULL:
}