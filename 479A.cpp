/*
    Date : 14/10/2024
    Problem : 479A
    Status : completed;
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    
    int t = 1;
    // cin >> t;

    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int ans = INT_MIN;

        ans = max(ans, a+b+c);
        ans = max(ans, a+b*c);
        ans = max(ans, a*(b+c));
        ans = max(ans, a*b*c);
        ans = max(ans, (a+b)*c);

        cout << ans << "\n";
    }

    return 0;
}