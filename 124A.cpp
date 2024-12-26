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

        int ans = 0;
        int i = n - a;
        int j = n - b;
        while(i > 0 && j <= n) {
            ans++;
            i--;
            j++;
        }
        cout << ans << '\n';
    }

    return 0;
}