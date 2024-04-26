#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    long long cnt=0,maxx=0;
    cin>>s;
    
    for(int i=0;i<s.size();i++){
        if(s[i]!=s[i-1]){
            cnt=0;
        }
        if(s[i]==s[i+1]||s[i]==s[i-1]||s[i]==s[i]){
            cnt++;
            maxx=max(cnt,maxx); 


        }
    }
    cout<<maxx;

}