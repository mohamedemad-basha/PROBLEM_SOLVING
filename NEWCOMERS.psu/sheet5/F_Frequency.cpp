#include<bits/stdc++.h>
using namespace std;
int main(){
        ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr), cerr.tie(nullptr);
    int n,q;
    cin>>n>>q;
    long long nums[n];

    
    int frq[100010]={0};
    int nfrq[100010]={0};

     for(int i=0;i<n;++i){
            cin>>nums[i];

        if(nums[i]>=0){
        ++frq[nums[i]];
        }else{
            ++nfrq[abs(nums[i])];
        }
     }


    while(q--){
        int x;
        cin>>x;

        if(x==1){
            int index,number;
            cin>>index>>number;

            if(nums[index-1]>=0){
            frq[nums[index-1]]--;
        }else{
            nfrq[abs(nums[index-1])]--;
        } 
        nums[index-1]=number;
        if(number>=0){
            frq[number]++;
        }else{
            nfrq[abs(number)]++;
        }
        }

        if(x==2){

            int num;
            cin>>num;
           if(num>=0){
            cout<<frq[num]<<"\n";
        }else{
            cout<<nfrq[abs(num)]<<"\n";
        }
    }
}
}