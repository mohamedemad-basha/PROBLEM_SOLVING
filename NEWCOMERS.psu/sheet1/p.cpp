#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b;
    long long x,y,z;
    cin>>a>>b;
    y=ceil(a/b);    x=floor(a/b); z=round(a/b);
    cout<<"floor "<<a<<" / "<<b<<" = "<<x<<endl;
  
     cout<<"ceil "<<a<<" / "<<b<<" = "<<y<<endl;
      cout<<"round "<<a<<" / "<<b<<" = "<<z<<endl;
}
