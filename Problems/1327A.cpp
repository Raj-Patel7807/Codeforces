/*
    Date : 15/10/2024
    Problem : 1327A
    Status : completed
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    
    ll t = 1;
    cin >> t;

    while(t--) {
        ll n, k;
        cin >> n >> k;

        if((n % 2 == k % 2) && (n >= k * k)) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}