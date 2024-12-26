/*
    Date : 15/10/2024
    Problem : 580A
    Status : completed;
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    
    int t = 1;
    // cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<ll> arr(n);
        for(auto& i : arr) cin >> i;

        int ans = 1, curr = 1;
        for(int i=0; i<n-1; ++i) {
            if(arr[i] <= arr[i+1]) {
                curr++;
                ans = max(ans, curr);
            } else {
                curr = 1;
            }
        }
        cout << ans << '\n'; 
    }

    return 0;
}