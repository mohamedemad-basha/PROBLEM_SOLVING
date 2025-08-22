#include<bits/stdc++.h>
using namespace std;

int minn(int nums[],int n){
            int minnn=nums[0];
            for(int i=1;i<n;++i){
                minnn=min(minnn,nums[i]);
            }
            return minnn;
        }

int main(){
            ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr), cerr.tie(nullptr);

        int n;
        cin>>n;
        int nums[n];
        for(int i=0;i<n;++i){
            cin>>nums[i];
            if(nums[i]<0)
            nums[i]=abs(nums[i]);
        }

        cout<<minn(nums,n);
}
