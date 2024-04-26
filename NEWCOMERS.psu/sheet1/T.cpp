#include<iostream>
using namespace std;
int main(){
    char x,c,s;
   cin>>x;
c=x-32;
s=x+32;
    if(x>=65&&x<=96){
        cout<<s;
    }else if(x>=97&&x<=122){
        cout<<c;
    }else{
        return 0;
    }
}