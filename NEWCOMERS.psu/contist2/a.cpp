#include<iostream>
using namespace std;
int main(){
    long long n,m;
long long even=0;
long long odd=0;

    cin>>n>>m;
    for(long long i = 1; i<=n; i+=2){
       odd+=i;
       if(odd==n)
       {cout <<i;
        break;}
       
}
cout <<" ";
    for(long long y = 0; y<=m; y+=2){
       even+=y;
       if(even==m)
       {cout <<y;
        break;}
       
}

return 0;
}