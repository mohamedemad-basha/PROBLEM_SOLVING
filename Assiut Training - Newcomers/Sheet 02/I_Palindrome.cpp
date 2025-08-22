#include<bits/stdc++.h>
using namespace std;

int main(){
            ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr), cerr.tie(nullptr);
            int num,rev=0;
            cin>>num;
            int copy=num;

            while (num!=0)
            {
                rev=rev*10+num%10;
                num/=10;

            }

            if(rev==copy) cout<<rev<<"\nYES\n";
            else cout<<rev<<"\nNO\n";
            
            
}
