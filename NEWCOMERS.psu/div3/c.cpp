#include<bits/stdc++.h>
using namespace std;
int main(){
    int cases,num,atacks,l=1,count=0;
    cin>>cases;
    for(int i=0;i<cases;i++){
        count=0;
       cin>>num>>atacks;
       int nums[num];
       for(int i=0;i<num;i++){
        cin>>nums[i];
       }

       for(int i=0;i<atacks;i++){
        for(int ship=0;ship<num;ship++)
        if(nums[ship]>0){
            
        nums[ship]--;
        break;
       }

       for(int ship=num-1;ship>=0;ship--){
        if(nums[ship]>0){
            
        nums[ship]--;
        break;
       }
       }

       int sunk=0;
       for(int durability:nums){
        if(durability==0){
            sunk++;
        }
       }
       cout<<sunk<<"\n";
       }

       
     
    }
}