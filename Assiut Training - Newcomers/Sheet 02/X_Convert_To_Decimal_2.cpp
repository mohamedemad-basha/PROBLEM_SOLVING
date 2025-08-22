#include<bits/stdc++.h>
using namespace std;

int main(){
            ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr), cerr.tie(nullptr);
            int num,k,c=0,neww=0;
            cin>>k;
while(k--){
    cin>>num;
    c=0;
    neww=0;
    while (num!=0)
    {
        int z=num%2;
       if(z==1){
        c++;
       }
       num=num/2;;
    }
        for(int i=0;i<c;i++){
            neww+=pow(2,i);
        }

        cout<<neww<<"\n";

}

            
            
}
