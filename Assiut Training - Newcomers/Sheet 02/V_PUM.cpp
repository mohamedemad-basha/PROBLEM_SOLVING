#include<bits/stdc++.h>
using namespace std;

int main(){
            ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr), cerr.tie(nullptr);
            int num,c=0;
            cin>>num;

            for(int i=1;i<=4*num;i++){
                c++;
                if(c<=3){
                    cout<<i<<" ";
                }else{
                    c=0;
                    cout<<"PUM\n";
                }
            }
            
            
}
