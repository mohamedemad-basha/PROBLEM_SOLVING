#include<iostream>
using namespace std;
int main(){ 
    int num,first,final;
    cin>>num;   
    if(num>999&&num<=9999){
    first=num/1000;
    final=num%10;
        if(first==final){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }else{
        return 0;
    }
}