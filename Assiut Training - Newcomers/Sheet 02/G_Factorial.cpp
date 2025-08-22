#include<bits/stdc++.h>
using namespace std;
int main()
{
            ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr), cerr.tie(nullptr);
   
   long long n,t,fact=1;
   cin>>t;
   while(t--){
   cin>>n;
   fact=1;
   for(int i=1;i<=n;i++) fact*=i;
   cout<<fact<<"\n";
   }

}