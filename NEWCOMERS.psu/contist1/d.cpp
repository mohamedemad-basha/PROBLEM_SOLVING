#include<bits/stdc++.h>
using namespace std;
int main()
{
int o,b,g,j;
cin>>o>>b>>g;
int j_o = o/1;
int j_b = b/2;
int j_g = g/4;

j = min(j_o,min(j_b,j_g));
if(j==0){
    cout<<0;
}else{
    cout<<j*7; 
}

}