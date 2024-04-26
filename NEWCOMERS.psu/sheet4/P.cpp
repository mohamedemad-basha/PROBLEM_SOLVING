#include<bits/stdc++.h>
using namespace std;
int main(){
    int k=0;
    string s,search;
    cin>>s>>search;
    for(int i=0;i<s.size();i++){
        if(s[i]==search[k]){
            k++;
        }
        if(k==search.size()){
            break;
        }
    }

     if(k==search.size()){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
   
}