#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,cnta=0,cntd=0;
    cin>>t;
    string s;
    cin>>s;
    for(int i=0;i<t;i++){
        if(s[i]=='A'){
            cnta++;
        }else{
            cntd++;
        }
    }

    if(cnta==cntd){
        cout<<"Friendship";
    }else if(cnta>cntd){
        cout<<"Anton";
    }else{
        cout<<"Danik";
    }
       
}