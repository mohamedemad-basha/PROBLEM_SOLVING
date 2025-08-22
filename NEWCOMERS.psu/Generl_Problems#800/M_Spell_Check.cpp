#include<bits/stdc++.h>
using namespace std;
int main(){
            ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr), cerr.tie(nullptr);
    long long t,n;
    string s;
    cin>>t;
    while (t--)
    {
        cin>>n>>s;
      if(n==5)
        sort(s.begin(),s.end());

        if(s=="Timru"){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    
}