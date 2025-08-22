#include<bits/stdc++.h>
using namespace std;

int main(){
            ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr), cerr.tie(nullptr);
            int t,n;
            cin>>t;

            while(t--){
                cin>>n;
                long long nums[n];
                bool flagg=false;
                for(long long i=0;i<n;i++){
                    cin>>nums[i];
                }

                sort(nums,nums+n);

                for(long long i=0;i<n;++i){
                   if(nums[i]==nums[i-1]){
                    flagg=true;
                   }
                }


                if(!flagg){
                      cout<<"YES\n";
                }else{        cout<<"NO\n";
                }
            }
}
