#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,s1,s2,start,endd;
    cin>>a1>>s1>>a2>>s2;


 if((a2<a1&&s2<a1)||(a2>s1&&s2>s1)){
            cout<<-1;
        }
        else{
            if(a1>a2){
                start=a1;
            }else
            start =a2;

            if(s1>s2){
                endd=s2;
            }else{
                endd =s1;
            }

            cout<<start<<" "<<endd;
        }


        
      

}