#include <iostream>

using namespace std;

int main() {   
long long num;
long long prime=0;
cin >> num;
for(long long i=2;i<=num;i++){
if(i ==2  ||  i==3||i==5){
 prime++;
}else if(i%2==0||i%3==0||i%5==0){
    notprime++;
}else{
prime++;
}
}
cout<<prime;
}