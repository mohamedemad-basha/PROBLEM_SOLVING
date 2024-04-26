#include<bits/stdc++.h>
using namespace std;
int main(){
    int sizee,num;
    cin>>sizee>>num;
    int nums[sizee];
    for(int i=0;i<sizee;i++){
        cin>>nums[i];
    }


   bool pair=false;
    for(int i=0;i<sizee;i++){
        for(int j=0;j<sizee;j++)
        if(nums[i]+nums[j+2]==num){
            pair=true;
            break;
        }
        
    }
    if(pair){
        cout<<"YES";
    }else{
        cout<<"NO";
    }


}