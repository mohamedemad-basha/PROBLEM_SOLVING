#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,num,rev=0;
    string n;
    cin>>n>>k;
   reverse(n.begin(),n.end());
   char nn=n[k-1];
   num=nn-48;
   cout<<num;

 
}