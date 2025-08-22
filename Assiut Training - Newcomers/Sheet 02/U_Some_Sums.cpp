#include<bits/stdc++.h>
using namespace std;

int main(){
            ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr), cerr.tie(nullptr);
            int num,k,l,sum=0,ans=0;
            cin>>num>>k>>l;

            for(int i=1;i<=num;i++){
               int v=i;
               sum=0;
               while (v!=0)
               {
                sum+=v%10;
                v/=10;
               }

               if(sum>=k&&sum<=l){
                  ans+=i ;
               }
            }

            cout<<ans;
}
