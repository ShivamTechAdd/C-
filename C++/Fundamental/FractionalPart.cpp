#include<iostream>
using namespace std;

int main(){
    float x;
    cout<<"Enter a float value:-";
    cin>>x;                 //9.1 op=0.1 // -1.3
    int y=(int)x;            //9     // -1
    if(y<0) y=y-1;            //gif   //-2
    float z=(float)y;         //9.0   //-2.0
    x=x-z;                   //9.1-9.0    {x}=x-[x];   //-1.3-(-2.0)
    cout<<"The fcational part is:- "<<x;   //0.1        //0.67

}
