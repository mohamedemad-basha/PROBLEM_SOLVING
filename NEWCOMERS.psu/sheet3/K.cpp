#include<bits/stdc++.h>
using namespace std;
int main(){
    int size1,size2,sum1=0,sum2=0;
    cin>>size1>>size2;
    int nums[size1];
    int numss[size2];

    for(int i=0;i<size1;i++){
        cin>>nums[i];
    }

    for(int i=0;i<size2;i++){
        cin>>numss[i];
    } 

    for(int i=0;i<size1;i++){
           sum1+=nums[i];
    }
    
    for(int i=0;i<size2;i++){
        sum2+=numss[i];
    }
    
    if(sum1==sum2){
         cout<<"YES";
    }else{
        cout<<"NO";
    }
}