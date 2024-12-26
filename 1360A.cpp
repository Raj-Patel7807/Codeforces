/*
    Date : 17/10/2024
    Problem : 1360A
    Status : completed;
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    
    int t = 1;
    cin >> t;

    while(t--) {
        int a, b;
        cin >> a >> b;

        int side = max(max(a, b), 2*min(a, b));

        cout << side*side << "\n";       
    }

    return 0;
}