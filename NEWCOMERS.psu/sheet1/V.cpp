#include<iostream>
using namespace std;
int main(){
    double x,z;
    int num;
    cin>>x;
    if(x>=10&&x<=99){
        x=x/10;
        num=x;
        cout<<num;
    }else if (x>99)
    {
        x=x/100;
        num = x;
        z=(x-num)*10;
        num =z;
        cout<<num;

    }else if(x<0&&x>=-99){
        x=x/10;
        num =x;
        cout<<num;
    }else if(x<-99){
         x=x/100;
        num = x;
        z=(x-num)*10;
        num =z;
        cout<<num;
    }else{
        cout<<0;
    }
}