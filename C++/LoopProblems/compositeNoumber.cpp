#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a noumber:-";
    cin>>n;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            //cout<<i<<" is factor and "<<n<<" is composite noumber."<<endl;
            cout<<n<<" is composite noumber";
            break;
        }
        else{
            cout<<n<<" is prime noumber or not composite .";
            break;
        }
    }
}