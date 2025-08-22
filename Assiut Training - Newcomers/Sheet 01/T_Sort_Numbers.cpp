#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,y,z,maxx,minn,dif;
    cin>>x>>y>>z;

    if(x>=y&&x>=z){
       maxx=x;
        if(y>z){
            dif=y;
            minn=z;
        }else if(z>y){
            dif=z;
            minn=y;
        }
    }else if(y>=x&&y>=z){
        maxx=y;
        if(x>z){
            dif=x;
            minn=z;;
        }else if(z>x){
           dif=z;
            minn=x;
        }
    }else if(z>=x&&z>=y){
        maxx=z;
        if(x>y){
            dif=x;
            minn=y;
        }else if(y>x){
            dif=y;
            minn=x;
        }
    }

    cout<<minn<<endl<<dif<<endl<<maxx<<endl;

    cout<<"\n";
    cout<<x<<endl;
        cout<<y<<endl;
    cout<<z<<endl;

}