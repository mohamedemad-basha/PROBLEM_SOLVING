#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    char c;
    cin>>x>>c>>y;

    switch (c)
    {
    case '>':
        if(x>y)
        cout<<"Right";
        else
        cout<<"Wrong";
        break;

        case '<':
        if(x<y)
        cout<<"Right";
        else
        cout<<"Wrong";
        break;

        case '=':
        if(x==y)
        cout<<"Right";
        else
        cout<<"Wrong";
        break;

        
    
    default:
        break;
    }

}