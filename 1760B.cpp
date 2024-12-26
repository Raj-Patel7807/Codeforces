// Date : 12/10/2024; Prob : 1760B;

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        string str;

        cin >> n >> str;

        int mx = 0;

        for(int i=0; i<n; ++i) {
            mx = max(mx, (int)str[i]);
        }
        cout << mx - 96 << "\n";
    }
     
    return 0;
}