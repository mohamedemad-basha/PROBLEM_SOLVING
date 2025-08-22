#include<bits/stdc++.h>
using namespace std;

int main(){
            ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr), cerr.tie(nullptr);
            string s;
            cin>>s;
            char current ='a';
            int total=0;

            for(int i=0;i<s.size();++i){
                int with=(s[i]-current+26)%26;
                int notwith=(current-s[i]+26)%26;
                total+=min(with,notwith);
                current=s[i];
            }
            
            cout<<total;
}