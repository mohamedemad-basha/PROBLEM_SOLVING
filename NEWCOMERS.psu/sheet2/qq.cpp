#include<iostream>
using namespace std;
int main(){
    int s,e;
    int c =0;
    cin>>s>>e;
    for(int i=s;i<=e;i++){
        bool luck =true;
        int temp=i;
    while(temp>0){
        int lucky=temp%10;
        if(lucky!=7&&lucky!=4){
            luck=false;
           break;
        }
        temp/=10;
    }
    if(luck){
    c++;
}
    }
cout<<c;
}