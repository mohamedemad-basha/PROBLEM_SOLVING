#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
     char x;
     cin>>a>>x>>b;

     switch (x)
     {
     case '+':
        cout<<a+b;
        break;

        case '-':
        cout<<a-b;
        break;

        case '*':
        cout<<a*b;
        break;

        case '/':
        cout<<a/b;
        break;
     
     default:
        break;
     }
     

}