#include<bits/stdc++.h>
using namespace std;
int main(){
    int cases;
    cin>>cases;
    string s;
    while(cases--){
        cin>>s;
        if(s=="yes"||s=="YES"||s=="Yes"||s=="YEs"||s=="YeS"||s=="yEs"||s=="yeS"||s=="yES"){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}