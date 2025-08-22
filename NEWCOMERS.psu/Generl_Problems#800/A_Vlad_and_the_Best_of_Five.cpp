#include<bits/stdc++.h>
using namespace std;
int main(){
        ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr), cerr.tie(nullptr);
        int q;
        cin>>q;
        string s;

        while(q--){
            cin>>s;
            int frq[2]={0};
            for(int i=0;i<5;++i){
                frq[s[i]-'A']++;
            }


            if(frq[0]>frq[1])
            cout<<'A'<<"\n";
            else
            cout<<'B'<<"\n";
        }
       
}
