#include<bits/stdc++.h>
using namespace std;
int main()
{
     char x;
     cin>>x;
     if(isupper(x)){
        cout<<(char)tolower(x);
     }else if(islower(x)){
        cout<<(char)toupper(x);
     }


}