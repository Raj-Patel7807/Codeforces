#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {

    int t;
    cin >> t;

    while(t--) {
        ll n, k;
        cin >> n >> k;

        ll op = 0;

        if(k == 1) {
            cout << n << "\n";
        } else {
            while(n > 0) {
                op += n%k;
                n /= k;
            }
            cout << op << "\n";
        }
    }
    
    return 0;
}