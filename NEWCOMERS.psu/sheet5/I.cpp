#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr), cerr.tie(nullptr);
    int sizee,tests,l,r;
    cin>>sizee>>tests;
    long long nums[sizee];
    long long prefix[sizee+1];
    prefix[0]=0;

    for(int i=0;i<sizee;++i)
        cin>>nums[i];
        prefix[1]=nums[0];
    
    
    
    for(int i=1;i<sizee;++i){
        prefix[i+1]=prefix[i]+nums[i];
    }

    while(tests--){
        cin>>l>>r;
            cout<<prefix[r]-prefix[l-1]<<"\n";
    }
}