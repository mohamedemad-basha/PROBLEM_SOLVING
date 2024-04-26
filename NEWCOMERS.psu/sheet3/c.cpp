#include<iostream>
using namespace std;
int main(){
    int size,r1,r2,temp;
    cin>>size>>r1>>r2;
    int nums[size];
    for(int i=0; i<size;i++){
        cin>>nums[i];
    }
    temp=nums[r1-1];
    nums[r1-1]=nums[r2-1];
    nums[r2-1]=temp;

    for(int i=0;i<size;i++){
        cout<<nums[i]<<" ";
    }
}