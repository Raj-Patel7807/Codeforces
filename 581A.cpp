/*
    Date : 15/10/2024
    Problem : 581A
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

        cout << min(a, b) << " ";
        cout << (max(a, b) - min(a, b))/2 << "\n";
    }

    return 0;
}