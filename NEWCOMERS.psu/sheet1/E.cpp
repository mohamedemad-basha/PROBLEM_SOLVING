#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   long double R,pi,A;
    pi = 3.141592653;
 cin>>R;
 A= pi*R*R;
    cout<< fixed << setprecision(9)<<A;
}