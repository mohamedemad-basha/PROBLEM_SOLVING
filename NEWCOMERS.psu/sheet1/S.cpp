#include<iostream>
using namespace std;
int main(){
    char x;
   cin>>x;
    if(x>=65&&x<=96){
        cout<<"CAPITAL";
    }else if(x>=97&&x<=122){
        cout<<"SMALL";
    }else{
        return 0;
    }
}