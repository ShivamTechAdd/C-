#include<iostream>
using namespace std;
int gcd(int a,int b){
    int hcf=1;
    
    // for(int i=1;i<=min(a,b);i++){
    //     if(a%i==0 && b%i==0)    //i is common factor.
    //     hcf=i;
    // }

    //More optimised.

    //24,60
    //i=24 23 22 21 ....
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){    //i is common factor.
        hcf=i;
        break;
        }
    }
    return hcf;
}

int main(){
    int a;
    cout<<"Eneter value of a:-";
    cin>>a;
    int b;
    cout<<"Eneter value of b:-";
    cin>>b;
    cout<<gcd(a,b);

}