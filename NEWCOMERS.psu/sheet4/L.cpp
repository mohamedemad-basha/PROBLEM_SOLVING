#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin>>n;
   sort(n.begin(),n.end());
   
   for(int i=n.length()/2;i<n.size();i++){
    if(n.size()==1){
        cout<<n[0];
        break;
    }
    cout<<n[i];
    if(i<n.size()-1){
        cout<<"+";
    }

   }
 
}