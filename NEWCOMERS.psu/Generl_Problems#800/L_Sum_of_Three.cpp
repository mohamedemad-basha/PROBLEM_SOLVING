#include<bits/stdc++.h>
using namespace std;
int main(){
            ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr), cerr.tie(nullptr);
    long long t,n,x,y,z;
    cin>>t;
    while (t--)
    {
        cin>>n;
        bool flagg=false;
        for(int i=1;i<n;++i){
            for(int j=i+1;j<n;++j){
                if(i+j>n)
                break;

                if(i+j+n-(i+j)>n)
                break;

                if(i%3!=0&&j%3!=0&&(n-(i+j))%3!=0&&i+j+n-(i+j)==n&&i<j&&j<n-(i+j)){
                    x=i; y=j; z=n-(x+y);
                    flagg=true;
                 goto x ; 
                }
                }
            }
            x:
            if(flagg)
              cout<<"YES\n"<<x<<" "<<y<<" "<<z<<"\n";
              else
              cout<<"NO\n";
                      }
             
    }
