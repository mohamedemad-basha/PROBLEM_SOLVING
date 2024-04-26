#include<iostream>
using namespace std;
int main(){
    int num,n;
    cin>>num;
    n=num;
    int res=0;
    while(num>0){
         res=res*10+num%10;
         num/=10;
        }
        
        if(n==res){
            cout<<"YES";
        }else{
            cout<<"NO";
        }   
 }