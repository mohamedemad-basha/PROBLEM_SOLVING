#include<bits/stdc++.h>
using namespace std;
int main()
{
            ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr), cerr.tie(nullptr);
   
   long long f,e,sum=0,temp;
   for(int i=0;i>=0;++i){
    cin>>f>>e;
    if(f>e){
        temp=e;
        e=f;
        f=temp;
    }

    if(f<=0||e<=0)  return 0;

    sum=0;
    for(int i=f;i<=e;i++){
        cout<<i<<" ";
        sum+=i;
    }
    cout<<"sum ="<<sum<<"\n";

    

   }
}