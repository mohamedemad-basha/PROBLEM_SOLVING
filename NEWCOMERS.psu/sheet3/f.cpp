#include<bits/stdc++.h>
using namespace std;
int main(){
    int sizee;
    int sum=0;
    cin>>sizee;
    int nums[sizee];
    for(int i=0; i<sizee;i++){
        cin>>nums[i];
        while (nums[i] != 0){
        sum += nums[i] % 10;
        nums[i] /= 10;
        }
    }
    cout<<sum;
    }