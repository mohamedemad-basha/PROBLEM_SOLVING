#include <iostream>

using namespace std;

int main() {
long long  num,cases;
long long sum =0;
cin >>cases;
for(int j=1;j<=cases;j++){
    cin>>num;
sum=(num*(num+1))/2;
cout<<sum<<"\n";
}
}