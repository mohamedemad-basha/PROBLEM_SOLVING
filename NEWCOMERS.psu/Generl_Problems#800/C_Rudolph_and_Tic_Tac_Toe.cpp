#include<bits/stdc++.h>
using namespace std;

int main(){
            ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr), cerr.tie(nullptr);

        int q;
        cin>>q;
        string a,b,c;
        while(q--){
            cin>>a;
            cin>>b;
            cin>>c;
            if(a[0]==b[0]&&a[0]==c[0]&&a[0]!='.'||a[0]==a[1]&&a[0]==a[2]&&a[0]!='.'){
                cout<<a[0]<<"\n";
            }
                else if(b[0]==b[1]&&b[0]==b[2]&&b[1]!='.'||a[2]==b[1]&&b[1]==c[0]&&b[1]!='.'||a[0]==b[1]&&b[1]==c[2]&&b[1]!='.'||a[1]==b[1]&&b[1]==c[1]&&b[1]!='.'){
                cout<<b[1]<<"\n";

            }else if(c[0]==c[1]&&c[0]==c[2]&&c[1]!='.'){
                cout<<c[0]<<"\n";

            }else if(a[2]==b[2]&&a[2]==c[2]&&a[2]!='.'){
                cout<<a[2]<<"\n";
            }else{
                cout<<"DRAW\n";
            }
        }
}
