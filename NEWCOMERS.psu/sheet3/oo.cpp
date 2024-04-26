#include<bits/stdc++.h>
using namespace std;
int main(){
    int sizee,sum=0,maxx=-99999;
    cin>>sizee;
    int nums[sizee];

    for(int i=0;i<sizee;i++){
        cin>>nums[i];
    }

    for(int i=0;i<sizee;i++){
        for(int j=i;j<sizee;j++){
            sum=0;
            for(int k=i;k<=j;k++){
                sum+=nums[k];
                maxx=max(sum,maxx);
            }
        }
    }
    cout<<maxx;
}