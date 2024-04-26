#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int tt[100010]={0};
    sort(s.begin(),s.end());

    for(int i=0;i<s.size();i++){
        tt[s[i]]++;
    }

    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1]){
            continue;
        }
        cout<<s[i]<<" -> "<<tt[s[i]]<<"\n";
    }
}