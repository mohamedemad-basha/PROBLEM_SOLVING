#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    int frq[26]={0};

    for(int i=0;i<s.size();++i){
        ++frq[s[i]-'a'];    
    }

    for(int i=0;i<26;++i){
        for(int j=0;j<frq[i];++j){
            cout<<(char) (i+'a');
        }
    }
}