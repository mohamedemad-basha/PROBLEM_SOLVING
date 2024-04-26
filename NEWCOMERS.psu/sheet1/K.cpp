#include<iostream>
using namespace std;
int main(){
    long long x,y;
    char s;
    cin>>x>>s>>y;
    if((s=='>'&& x>y)||(s=='<'&&x<y)||(s=='='&&x==y)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}