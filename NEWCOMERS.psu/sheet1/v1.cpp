#include<iostream>
using namespace std;
int main(){
    double x,z,L,f; 
    int num,n;
    cin>>x;   //2848
    L=x/100;  //28.48    
    num = L;  //28
    z=(L-num)*10; //4.8
    n = z; //4
    f=(z-n)/10;  //.08
    cout<<(z - f)*10; //.48-.08=.4    //.4*10=4
}