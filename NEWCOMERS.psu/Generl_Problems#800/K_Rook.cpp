#include<bits/stdc++.h>
using namespace std;

int main(){
            ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr), cerr.tie(nullptr);
            int t;
            cin>>t;
            string s;     
            while (t--)
            {
             cin>>s;

             for(int i=int(s[1]-'0'+1);i<=8;++i){
               cout<<s[0]<<i<<"\n";
             }
            

            for(int i=int(s[1]-'0'-1);i>=1;--i){
               cout<<s[0]<<i<<"\n";
             }

            for(int i=int(i=s[0]-s[0]-1);i>=int('a'-s[0]);--i){
            cout<<char(s[0]+i)<<s[1]<<"\n";
            }

            for(int i=int(i=s[0]-s[0]+1);i<=int('h'-s[0]);++i){
            cout<<char(s[0]+i)<<s[1]<<"\n";
            }
            }
}