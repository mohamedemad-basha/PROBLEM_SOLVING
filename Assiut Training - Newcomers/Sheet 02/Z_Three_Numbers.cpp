#include<bits/stdc++.h>
using namespace std;

int main(){
            ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr), cerr.tie(nullptr);
            int num,k,c=0,x,y,z;
            cin>>k>>num;

            for(int i=0;i<=k;i++){
                x=i;
                for(int j=0;j<=k;j++){
                    y=j;
                    z=num-(x+y);
                    if(z<=k&&z>=0)  c++;
                }
            }

            cout<<c;
            
            
}
