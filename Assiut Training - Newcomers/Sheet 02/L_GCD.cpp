#include<bits/stdc++.h>
using namespace std;

int main(){
            ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr), cerr.tie(nullptr);
            int a,b,maxx=0;
            cin>>a>>b;

            for(int i=1;i<=b;i++){
               if(a%i==0&&b%i==0){
                if(i>maxx) maxx=i;
               }
            }

            cout<<maxx;
}
