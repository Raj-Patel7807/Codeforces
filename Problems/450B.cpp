/*
    Date : 16/10/2024
    Problem : 450B
    Status : completed;
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll MOD = 1e9 + 7;

int main() {
    
    int t = 1;
    // cin >> t;

    while(t--) {
        ll x, y, n;
        cin >> x >> y >> n;

        ll ans;

        switch(n % 6) {
            case 1: ans = x; break;
            case 2: ans = y; break;
            case 3: ans = y - x; break;
            case 4: ans = -x; break;
            case 5: ans = -y; break;
            case 0: ans = x - y; break;
        }
        cout << ((ans % MOD) + MOD) % MOD << "\n";
    }

    return 0;
}