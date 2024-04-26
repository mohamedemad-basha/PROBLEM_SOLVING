#include<iostream>
using namespace std;
int main(){
    int size,position;
    cin>>size;
    cin>>position;
    int nums[size];
    for(int i=0;i<size;i++){
        cin>>nums[i];
    }
    cout<<nums[position-1];
}