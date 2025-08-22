#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    string s,t;
    cin>>n>>m>>s>>t;
    while(s.find(t)!=-1){
        s.erase(s.find(t),m);
    }

    if(s.size()==0){
        cout<<"EMPTY!";
    }else{
        cout<<s;
    }
}