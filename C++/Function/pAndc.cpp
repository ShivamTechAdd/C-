#include<iostream>
using namespace std;

int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}

int combination(int n,int r){
    int ncr=fact(n)/(fact(r)*fact(n-r));
    return ncr;
}

int permutaion(int n,int r){
    int npr=fact(n)/fact(n-r);
    return npr;
}

int main(){
int n;
cout<<"Enter value of n:-";
cin>>n;
int r;
cout<<"Enter value of r:-";
cin>>r;

// int nfact=1;
// for(int i=1;i<=n;i++){
//     nfact*=i;
// }
// int rfact=1;
// for(int i=1;i<=r;i++){
//     rfact*=i;
// }
// int nrfact=1;
// for(int i=1;i<=(n-r);i++){
//     nrfact*=i;
// }

// int nfact=fact(n);
// int rfact=fact(r);
// int nrfact=fact(n-r);

int ncr=combination(n,r);
cout<<"The ncr is :-"<<ncr<<endl;

int npr=permutaion(n,r);
cout<<"The npr is :-"<<npr;
}