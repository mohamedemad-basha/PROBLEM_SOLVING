#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,fact=1;
    cin>>num;

    for(int i=1; i<=num;i++){
        fact*=i;
    }

   if(fact%2==0){
    cout<<"YES";
   }else{
    cout<<"NO";
   }
}