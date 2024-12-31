/*
    Date : 14/10/2024
    Problem : 379A
    Status : completed;
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    
    int t = 1;
    // cin >> t;

    while(t--) {
        int a, b;
        cin >> a >> b;

        int ans = 0;
        int left = 0;
        while(a > 0) {
            ans += a;
            left += a % b;
            if(left >= b) {
                ans += left/b;
                left -= ((left/b)*b - (left/b));
            }
            a /= b;
        }
        cout << ans << "\n";
    }

    return 0;
}