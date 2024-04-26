#include<iostream>
using namespace std;
int main(){
    int num;
    int c =0;
    cin>>num;
    while(num>0){
        int lucky=num%10;
        if(lucky!=7&&lucky!=4){
            cout<<"NO";
            return 0;
        }
        num/=10;
    }
    cout<<"YES";
    return 0;
}