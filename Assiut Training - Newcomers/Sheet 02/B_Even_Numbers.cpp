#include<bits/stdc++.h>
using namespace std;
int main()
{
            ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr), cerr.tie(nullptr);
   
   int t,c=0;
   cin>>t;
   for(int i=2;i<=t;++i){
    if(i%2==0){
    cout<<i<<"\n";
    c++;
   }
   }

   if (c==0)
   cout<<-1;
}