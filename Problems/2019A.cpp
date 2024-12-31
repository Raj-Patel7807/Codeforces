/*
    Date : 17/10/2024
    Problem : 2019A
    Status : completed;
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    
    int t = 1;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for(auto& i : arr) cin >> i;

        int mx1 = INT_MIN, mx2 = INT_MIN;
        int size1 = 0, size2 = 0;

        for(int i=0; i<n; i+=2) {
            mx1 = max(mx1, arr[i]);
            size1++;
        }

        for(int i=1; i<n; i+=2) {
            mx2 = max(mx2, arr[i]);
            size2++;
        }
        int ans = max(mx1+size1, mx2+size2);

        cout << ans << "\n";
    }

    return 0;
}