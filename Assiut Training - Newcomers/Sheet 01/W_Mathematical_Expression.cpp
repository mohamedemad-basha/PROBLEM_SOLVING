#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,a;
    char c,q;
    cin>>x>>c>>y>>q>>a;

    switch (c)
    {
    case '+':
        if(x+y==a)
        cout<<"Yes";
        else
        cout<<x+y;
        break;

        case '*':
        if(x*y==a)
        cout<<"Yes";
        else
        cout<<x*y;
        break;

        case '-':
        if(x-y==a)
        cout<<"Yes";
        else
        cout<<x-y;
        break;

        case '/':
        if(x/y==a)
        cout<<"Yes";
        else
        cout<<x/y;
        break;

        
    
    default:
        break;
    }

}