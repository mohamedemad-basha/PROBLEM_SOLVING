#include<iostream>
using namespace std;
int main(){
    int cases,size;
    cin>>cases;
    for(int j=0;j<cases;j++){
        cin>>size;
        int nums[size];

    for(int i=0;i<size;i++){
        cin>>nums[i];
          if(nums[i]<0){
            nums[i]=-nums[i];
        }
    }

    for(int l=0;l<size;l++){
        cout<<nums[l]<<' ';
    }
    cout<<"\n";

 }
}
   