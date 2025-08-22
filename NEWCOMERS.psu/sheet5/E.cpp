#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n>>s;
    int freq[26]={0};

    for(int i=0;i<s.size();++i){
        if(isalpha(s[i])){
            int index=tolower(s[i])-'a';
            freq[index]++;
        }
    }
    
     bool flagg=true;
    for(int i=0;i<26;++i){
        if(freq[i]==0) {
            flagg=false;
            break;
        }
    }

    if(flagg){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}