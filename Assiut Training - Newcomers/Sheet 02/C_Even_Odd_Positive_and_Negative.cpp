#include<bits/stdc++.h>
using namespace std;
int main()
{
            ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr), cerr.tie(nullptr);
   
   int t,n,e=0,o=0,p=0,ne=0;
   cin>>t;
   while(t--){
    cin>>n;

    if(n>0)  p++;
    else if(n<0) ne++;

    if(n%2==0) e++;
    else o++;
   }

   cout<<"Even: "<<e<<"\n";
   cout<<"Odd: "<<o<<"\n";
   cout<<"Positive: "<<p<<"\n";
   cout<<"Negative: "<<ne<<"\n";
}