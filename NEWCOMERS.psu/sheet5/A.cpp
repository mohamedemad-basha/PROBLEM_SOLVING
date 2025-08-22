#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,cnt=0;
    cin>>n>>k;
    int nums[n];
    for(int i=0;i<n;++i){
        cin>>nums[i];
    }

    for(int i=0;i<n;++i){
        if(nums[i]!=k||nums[i]==k)
        cnt++;
        if(nums[i]==k){
        cout<<cnt;
        return 0;
        }

        if(i==n-1&&nums[i]!=k){
            cout<<-1;
        }
    }
}