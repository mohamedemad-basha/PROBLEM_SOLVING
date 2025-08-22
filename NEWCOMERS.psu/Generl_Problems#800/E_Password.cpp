#include<bits/stdc++.h>
using namespace std;

int main(){
            ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr), cerr.tie(nullptr);
            int t,n;
            cin>>t;
            while(t--){
                cin>>n;
                int nums[n];
                for(int i=0;i<n;++i){
                     cin>>nums[i];
            }

            int nn=10-n-1;
            int sum=0;
            for(int i=1;i<=nn;i++)
            sum+=i;

            cout<<sum*6<<"\n";
            
}
}
