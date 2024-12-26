/*
    Date : 19/10/2024
    Problem : 123
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define fr(i, n) for(int i=0; i<n; ++i)
#define v vector
#define pb push_back

void solution() {
    int n;
    cin >> n;

    if(n == 1) {cout << 1; return;}
    else if(n == 2) {cout << 2; return;}

    int f1 = 1, f2 = 1, sum = 2;
    for(int i=3; i<=n; ++i) {
        int fn = f1 + f2;
        f1 = f2;
        f2 = fn;
        sum += fn;
    }
    cout << sum << endl;
}

signed main() {
    
    int t = 1;
    // cin >> t;

    while(t--) {
        solution();
    }

    return 0;
}