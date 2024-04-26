#include<bits/stdc++.h>
using namespace std;
int main(){
    int sizee,count=0;
    cin>>sizee;
    int nums[sizee];
    for(int i=0; i<sizee;i++){
        cin>>nums[i];
    }

    for(int i=0;i<sizee;i++){
        if(nums[i+1]>nums[i]){
            nums[i]=nums[i+1];
        }
    }
    
    for(int i=0;i<sizee;i++){
        if(nums[0]%nums[i]==0){
            count++;
        }
    }
    cout<<count-1;
}