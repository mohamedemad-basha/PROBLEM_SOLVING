#include<bits/stdc++.h>
using namespace std;
int main(){
    int oppe,q;
    char x;
    cin>>oppe;
    string n;
    for(int i=0;i<oppe;i++){
        cin>>q;
        if(q==1){
            cin>>x;
            n.push_back(x);
        }else if(q==2&&!n.empty()){
            n.erase(n.size()-1);
        }
    }
    cout<<n;
   
}