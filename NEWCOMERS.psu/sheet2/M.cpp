#include <iostream>

using namespace std;

int main() {   
int num;
int c=0;
cin >> num;
for(long long i=2; i<=num;i++){
    bool p=true;
    for(long long j =2;j*j<=i;j++){
        if(i%j==0){
            p=false;
            break;
            }
         }
          if(p){
c++;
} 
} 
cout<<c;
}