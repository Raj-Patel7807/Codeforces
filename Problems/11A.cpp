/*
    Date : 14/10/2024
    Problem : 11A
    Status : completed
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    
    int t = 1;
    // cin >> t;

    while(t--) {
        int n, d;
        cin >> n >> d;

        vector<int> arr(n);
        int ans = 0;
        for(auto& i : arr) {cin >> i;}

        for(int i=1; i<n; ++i) {
            if(arr[i-1] >= arr[i]) {
                int inc = (arr[i-1] - arr[i])/d + 1;
                arr[i] += inc*d;
                ans += inc;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}