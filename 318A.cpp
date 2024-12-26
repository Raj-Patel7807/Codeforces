/*
    Date : 13/10/2024;
    Problem : 318A;
    Status : completed;
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    
    int t = 1;
    // cin >> t;

    while(t--) {
        ll n, k;
        cin >> n >> k;

        ll ans = 0;
        ll odds = (n+1)/2;

        if(k > odds) {
            if(n % 2 == 0) {k -= n/2;}
            else {k -= (n/2 + 1);}
            ans = 2*k;
        } else {
            ans = 2*k - 1;
        }
        cout << ans << "\n";
    }

    return 0;
}