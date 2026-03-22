#include<iostream>>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of terms(ap):-";
    cin>>n;
    // for(int i=1;i<=2*n-1;i+=2){
    //     cout<<i<<endl;
    // }

    //seperate variable.
    //1 3 5 7 9 ...
    int a;
    cout<<"Enter first term(ap):-";
    cin>>a;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a=a+2;
    }
    cout<<endl<<"****************************************"<<endl;
    //Gp 

    int m;
    cout<<"Enter the no of terms(gp):-";
    cin>>m;

    int a1;
    cout<<"Enter first term(gp):-";
    cin>>a1;
    for(int i=1;i<=m;i++){
        cout<<a1<<" ";
        a1=a1*2;
    }

}