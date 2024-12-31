#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    for(int i=0; i<t; ++i) {
        int l, r;
        cin >> l >> r;

        if(2*l <= r) {
            cout << l << " " << 2*l << "\n";
        } else {
            cout << -1 << " " << -1 << "\n";
        }
    }
        
    return 0;
}