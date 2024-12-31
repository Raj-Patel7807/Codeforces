/*
    Date : 16/10/2024
    Problem : 459A
    Status : completed;
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    
    int t = 1;
    // cin >> t;

    while(t--) {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        if(x1 == x2) {
            int i = abs(y1 - y2);
            cout << x1 + i << " " << y1 << " " << x2 + i << " " << y2;
        } else if(y1 == y2) {
            int i = abs(x1 - x2);
            cout << x1 << " " << y1 + i << " " << x2 << " " << y2 + i; 
        } else if(abs(x1-x2) == abs(y1-y2)) {
            cout << x1 << " " << y2 << " " << x2 << " " << y1;
        } else {
            cout << -1 << "\n";
        }
    }

    return 0;
}