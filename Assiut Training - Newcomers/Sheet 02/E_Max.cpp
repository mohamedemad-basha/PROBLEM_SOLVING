#include<bits/stdc++.h>
using namespace std;
int main()
{
            ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr), cerr.tie(nullptr);
   
   int t,n,maxx=0;
   cin>>t;
   while(t--){
    cin>>n;
    if(n>maxx)
    maxx=n;
   }
      cout<<maxx;

   }