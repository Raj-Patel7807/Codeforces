/*
    Date : 15/10/2024
    Problem : 189A
    Status : completed;
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    
    int t = 1;
    // cin >> t;

    while(t--) {
        int n, a, b, c;
        cin >> n >> a >> b >> c;

        int ans = 0;

        for(int i=0; i*a <= n; ++i) {
            for(int j=0; i*a + j*b <= n; ++j) {
                int len = n - (i*a+j*b);
                if(len % c == 0) {
                    int k = len/c;
                    ans = max(ans, i+j+k);
                }
            }
        }
        cout << ans << "\n";
    }

    return 0;
}