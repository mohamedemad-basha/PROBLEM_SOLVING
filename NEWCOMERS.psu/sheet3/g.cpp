#include<iostream>
using namespace std;
int main(){
    int sizee;
    bool rev =true;
    cin>>sizee;
    int nums[sizee];
    for(int i=0;i<sizee;i++){
        cin>>nums[i];
        }

        for(int i=0;i<sizee/2;i++){  
                if(nums[i]!=nums[sizee-i-1]){
                    rev=false;
                }
                break;
            }
            
            if(rev){
                cout<<"YES";
            }else{
                cout<<"NO";
            }
        }
        
/*
size must be an odd
7

[0]1==7[6]   diffrence 6
[1]2==6[5]   diffrence 4
[2]3==5[4]  diffrence 2
[3]4==4[3]  diffrence 0

diff-2

7/2=3
nums[i]==nums[size-i-1]



*/

     