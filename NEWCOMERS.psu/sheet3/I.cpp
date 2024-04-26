#include<bits/stdc++.h>
using namespace std;
int main(){
    int sizee;
    cin>>sizee;
    int nums[sizee];
    for(int i=0;i<sizee;i++){
        cin>>nums[i];
    }
    sort(nums,nums+sizee);

    for(int i=0; i<sizee;i++){
        cout<<nums[i]<<' ';
    }
}