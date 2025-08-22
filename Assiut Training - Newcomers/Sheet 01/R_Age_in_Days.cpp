#include<bits/stdc++.h>
using namespace std;
int main()
{
    int days;
    cin>>days;

    int years=days/365; //num of years //1
            -=years*365; //400-1*365=35   
        int months=days/30;  //35/30=1
    days-=months*30; //35-1*30 =5

    cout<<years<<" years\n";
    cout<<months<<" months\n";
    cout<<days<<" days\n";
}