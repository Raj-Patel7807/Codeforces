/*
    Date : 15/10/2024
    Problem : 363B
    Status : completed;
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    
    int t = 1;
    // cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for(auto& i : arr) cin >> i;

        ll sum = 0;
        int ans = 0;

        for(int i=0; i<k; ++i) {
            sum += arr[i];
        }
        ll minSum = sum;
        for(int i=k; i<n; i++) {
            sum += arr[i] - arr[i-k];
            if(sum < minSum) {
                minSum = sum;
                ans = i - k + 1;
            }
        }
        cout << ans+1 << "\n";
    }

    return 0;
}