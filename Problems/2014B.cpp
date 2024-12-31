/*
    Date : 17/10/2024
    Problem : 2014B
    Status : completed;
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    
    int t = 1;
    cin >> t;

    while(t--) {
        ll n, k;
        cin >> n >> k;

        ll ans;

        if(n >= k) {
            ans = (k*(2*n - k + 1)) / 2;
        } else {
            ans = (n*(n+1)) / 2;
        }
    
        if(ans % 2 == 0) {cout << "YES" << "\n";}
        else {cout << "NO" << "\n";}
    }

    return 0;
}