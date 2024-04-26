#include<bits/stdc++.h>
using namespace std;
int main(){
    int sizee,k,temp;
    cin>>sizee>>k;
    temp=sizee;
    int nums[sizee];
    for(int i=0;i<sizee;i++){
        cin>>nums[i];
    }

    bool found=false;

    int right=sizee-1;
    for(int i=0;i<sizee;i++){
        temp=sizee;
        for(int j=0;j<sizee;j++){
             temp--;
if(i==temp||i+1==temp||i-1==temp){
    continue;
}
        if(nums[i]+nums[temp]==k){
            found=true;
            break;
        }
        }
    }

    if(found==true){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

}

/*
1 2 3 4 5
k=7

1+5!=7

*/