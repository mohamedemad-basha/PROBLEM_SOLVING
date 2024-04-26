#include<iostream>
using namespace std;
int main(){
    int sizee;
    cin>>sizee;
    int nums[sizee];

    for(int i=0;i<sizee;i++){
        cin>>nums[i];
    }
   
   for(int i = sizee-1;i>=0;--i){
    cout<<nums[i]<<' ';
   }
        
}