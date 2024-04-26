#include<iostream>
using namespace std;
int main(){
    double x; 
    int num,first,end;
    cin>>x;   //1520
   first = (x-num)*10;
    if(x>999&&x<=9999){
         x=x/10;    //  152.0
        num = x; //152
        first = (x-num)*10; //0 
        x=x/100; //1.52
        end=x;   //1
        cout<<first<<end;
        if(first==end){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }else{
        return 0;
    }
    

}