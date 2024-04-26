#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, b;
    cin>>s>>b;

    for(int i=0;i<s.size();i++){
        s[i]= toupper(s[i]);
   }

   for(int i=0;i<b.size();i++){
        b[i]= toupper(b[i]);
   }


   if(s==b){
    cout<<0;
   }else if(s<b){
    cout<<-1;;
   }else{
    cout<<1;
   }
}