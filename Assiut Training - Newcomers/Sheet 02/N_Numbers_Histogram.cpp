#include<bits/stdc++.h>
using namespace std;
int main()
{
            ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr), cerr.tie(nullptr);
   
   char s;
   cin>>s;
   int t,n;
   cin>>t;
   while(t--){
    cin>>n;

    for(int i=0;i<n;++i){
    switch (s)
    {
    case '+':
        cout<<"+";
        break;

        case '*':
        cout<<"*";
        break;

        case '-':
        cout<<"-";
        break;

        case '/':
        cout<<"/";
        break;
    
    default:
        break;
    }
   }
   cout<<"\n";
   }
}