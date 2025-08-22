#include<bits/stdc++.h>
using namespace std;
int main(){
    int temp,n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;++i){
        cin>>nums[i];
    }

    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
        if(nums[i]>nums[j]){
            temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
        }
    }
    }
     for(int i=0;i<n;++i){
       cout<<nums[i]<<" ";

    }
}
