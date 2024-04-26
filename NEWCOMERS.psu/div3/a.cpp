#include<bits/stdc++.h>
using namespace std;
int main(){
    int cases,num,price1,price2,case1,case2,price_ind,price_pairs,total1,total2;
    cin>>cases;
    for(int i=0;i<cases;i++){
       cin>>num>>price1>>price2;
       int num_pairs=num/2;
       int reminderr=num%2;
       price_pairs=num_pairs*price2;
       price_ind=reminderr*price1;
       total1=num*price1;
       total2=price_ind+price_pairs;
       cout<<min(total1,total2)<<"\n";
     
    }
}