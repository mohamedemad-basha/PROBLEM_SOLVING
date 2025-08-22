#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n, temp;
    cin >> n;
    int a[n],sorty[n],cnt = 0;
    
    for (int i = 0 ; i<n ; i++) {
        cin>>a[i];
    }
   
  sort(a,a+n);

    for (int i = 0 ; i<n ; i++)
        if (a[i]%2==0) {
            sorty[cnt]=a[i];
            cnt++;
        }
        
    for (int i = 0 ; i<n ; i++)
        if (a[i]%2!=0) {
            sorty[cnt]=a[i];
            cnt++;
        }
 
    for (int i = 0 ; i<n ; i++)
        cout<<sorty[i]<<" ";
}