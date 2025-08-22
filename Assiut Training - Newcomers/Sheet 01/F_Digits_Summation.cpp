#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
     long long m,n,x,sum=0;
     cin>>m>>n;
     x=(m/10)*10;
     sum=m-x;

     x=n-(n/10)*10;
     sum+=x;
     cout<<sum;

     

}
