#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, q;
    cin >> n >> q;
    long long nums[n];

    for (long long i = 0; i < n; ++i)
        cin >> nums[i];

    sort(nums, nums + n);

    while (q--) {
        int l = 0, r = n - 1, mid, x;
        cin >> x;

        bool found = false;

        while (l <= r) {
            mid = (r + l) / 2;

            if (nums[mid] == x) {
                found = true;
                break;
            } else if (nums[mid] > x) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        if (found) {
            cout << "found\n";
        } else {
            cout << "not found\n";
        }
    }

    return 0;
}