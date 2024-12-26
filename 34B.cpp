/*
    Date : 16/10/2024
    Problem : 34B
    Status : completed;
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    
    int t = 1;
    // cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;

        vector<int> arr(n);
        for(auto& i : arr) cin >> i;

        sort(arr.begin(), arr.end());

        int ans = 0;
        for(int i=0; i<m; ++i) {
            if(arr[i] <= 0) {
                ans += arr[i];
            }
        }
        cout << abs(ans) << "\n";
    }

    return 0;
}