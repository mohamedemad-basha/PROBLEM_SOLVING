#include<bits/stdc++.h>
using namespace std;
int main(){
    int sizee;
    int count=0,maxx=0;
    cin>>sizee;
    int nums[sizee];
    for(int i=0; i<sizee;i++){
        cin>>nums[i];
         if(nums[maxx]<nums[i]){
           max=i;
        }
    }
    
    for(int i=0;i<sizee;i++){
        if(nums[maxx]%nums[i]==0){
            count++;
        }
    }
    cout<<count;
}