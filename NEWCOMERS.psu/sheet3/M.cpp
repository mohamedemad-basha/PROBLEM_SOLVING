#include<bits/stdc++.h>
using namespace std;
int main(){
    int sizee,c=0;
    cin>>sizee;
    int nums[sizee];
    for(int i=0;i<sizee;i++){
        cin>>nums[i];
    }
bool flagg=true;
sort(nums,nums+sizee);   

    for(int i=0;i<sizee;i++){
       if(nums[i]!=i+1){
        flagg=false;
       }
        
    }

    if(flagg==true){
        cout<<"YES";
    }else{
        cout<<"NO";
    }


}
      
   



/*
i=0 j=i+1
for(i to j)
i=0 j=1
0 || 1 2 3 4
1 || 2 3 4
*/


/*
0 0 1 2 3 4
1 0 1 2 3 4
*/