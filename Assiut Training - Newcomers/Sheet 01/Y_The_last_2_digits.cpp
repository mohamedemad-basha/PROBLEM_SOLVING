#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a1,a2,s1,s2;
    long long answer;
    cin>>a1>>s1>>a2>>s2;
    a1%=100;
    a2%=100;
     s2%=100;
       s1%=100;

       answer=a1*a2*s1*s2;
       if(answer%100<=9){
        cout<<0;
       }

       cout<<answer%100;


    


        
      

}