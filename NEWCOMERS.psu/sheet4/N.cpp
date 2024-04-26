#include<bits/stdc++.h>
using namespace std;
int main(){
    int sizee;
    cin>>sizee;
    string n,temp;
    cin>>n;
    temp=n;
   reverse(n.begin(),n.end());
  if(n==temp){
    cout<<"YES";
  }else{
    cout<<"NO";
  }
}