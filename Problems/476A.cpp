/*
    Date : 14/10/2024
    Problem : 476A
    Status : completed
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    
    int t = 1;
    // cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;

        vector<int> step;

        while(n > 0) {
            if(n == 1) {
                step.push_back(1);
                n -= 1;
            } else {
                step.push_back(2);
                n -= 2;
            }
        }

        int a = step.size();
        for(auto i : step) {
            if(a % m == 0) {
                cout << a << "\n";
                return 0;
            }
            if(i == 2) {
                a++;
            }
            if(a % m == 0) {
                cout << a << "\n";
                return 0;
            }
        }
        cout << -1 << "\n";
    }

    return 0;
}