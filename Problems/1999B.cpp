// Date : 13/10/2024; Prob : 1999B;

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        int ans = 0;

        int a = a1 - b1;
        int b = a1 - b2;
        int c = a2 - b1;
        int d = a2 - b2;

        if((a > 0 && d >= 0) || (a == 0 && d > 0)) {
            ans += 2;
        }
        if((b > 0 && c >=0) || (b == 0 && c > 0)) {
            ans += 2;
        }

        cout << ans << "\n";
    }
    
    return 0;
}