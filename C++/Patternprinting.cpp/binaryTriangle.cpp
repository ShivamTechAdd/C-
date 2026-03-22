#include<iostream>
using namespace std;
int main(){
 int n;
 cout<<"Enter no of rows:-";
 cin>>n;
 int a=5;
// for(int i=1;i<=n;i++){
//     if(i%2!=0) a=1;     //row no odd 101010
//     else a=0;           //row no even 010101
//     for(int j=1;j<=i;j++){
//         cout<<a;
//         //flipping
//         if(a==1) a=0;
//         else a=1;
//     }
//     cout<<"\n";
// }

//Another Approach
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        if((i+j)%2==0) cout<<1;
        else cout<<0;
    }
    cout<<"\n";
}

}