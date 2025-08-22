#include<bits/stdc++.h>
using namespace std;
int main(){
            ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr), cerr.tie(nullptr);
    long long t,n,l;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int nums[n];

        for(int i=0;i<n;++i){


        cin>>nums[i];
        }

        bool flagg=false;

        for(int i=1;i<n;++i){
        if(nums[i]!=nums[i-1]){
        flagg=true;
        break;
        }
        }
            
        if(flagg==true){
            cout<<"YES\n";
            for(int i=0,j=n-1;i<=j;i++,j--){
            cout<<nums[j]<<" ";
            if(i!=j)
            cout<<nums[i]<<" ";
            }
            cout<<"\n";
        
             }else
             cout<<"NO\n";
}
}