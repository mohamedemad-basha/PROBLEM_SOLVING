#include<bits/stdc++.h>
using namespace std;

int main(){
            ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr), cerr.tie(nullptr);
            long long t,n,l;
            cin>>t;

            while(t--){
                cin>>n;
                long long nums[n],frq[n+1]={0};

                for(long long i=0;i<n;i++){
                    cin>>nums[i];
                }

                
                for(long long i=0;i<n;++i){
                    frq[nums[i]]++;
                   }
l=-1;
                for(long long i=0;i<n+1;++i){
                      if(frq[i]>=3){
                        l=i;
                        break;
                   }
            }
            cout<<l<<"\n";
            }
                }

