#include<bits/stdc++.h>
using namespace std;
int main()
{
    long double x;
    cin>>x;
    int l;
    l=x;
    cin>>x;

    if(l==x)
    cout<<"int "<<l;

    if(x>l)
    cout<<"float "<<l<<" "<<x-l;

}