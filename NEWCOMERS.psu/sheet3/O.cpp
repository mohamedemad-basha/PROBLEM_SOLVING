#include <iostream>
using namespace std;
int main(){
    int size1, sum=0, maxx=-99999;
    cin >> size1;
    int nums[size1];

    for(int i =0;i<size1;i++){
        cin>>nums[i];
        }

        for(int i=0;i<size1;i++){
           
            for(int j=i;j<size1;j++){
 sum=0;
                for(int k=i;k<=j ;k++){
sum+=nums[k];
maxx=max(sum,maxx);

                }
                }
                
                }
                cout<<maxx;
               
}
