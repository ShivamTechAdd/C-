#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a noumber:-";
    cin>>n;
    bool flag=true;  //it is prime.
    for(int i=2;i<=n-1;i++){
        if(n%i==0){   //i is factor of n.
            flag=false;
            break;
        }
    }
    if(n==1){
        cout<<"1 is neither prime not composite no.";
    }
    else if (flag==true){
        cout<<n<<" is prime noumber";
    }
    else{
        cout<<n<< " is composite";
    }

}