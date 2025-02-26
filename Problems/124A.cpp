/*
    Date : 14/10/2024
    Problem : 124A
    Status : completed;
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    
    int t = 1;
    // cin >> t;

    while(t--) {
        int n, a, b;
        cin >> n >> a >> b;

        cout << (n - max(a+1, n-b) + 1) << endl;

        // This is Also Right Approach;
        // int ans = 0;
        // int i = n - a;
        // int j = n - b;
        // while(i > 0 && j <= n) {
        //     ans++;
        //     i--;
        //     j++;
        // }
        // cout << ans << '\n';
    }

    return 0;
}
