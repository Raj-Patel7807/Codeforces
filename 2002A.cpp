/*
    Date : 19/10/2024
    Problem : 2002A
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define fr(i, n) for(int i=0; i<n; ++i)
#define v vector
#define pb push_back

void solution() {
    int n , m ,k;
    cin >> n >> m >> k;

    cout << min(n, k)*min(m, k) << endl;
}

signed main() {
    
    int t = 1;
    cin >> t;

    while(t--) {
        solution();
    }

    return 0;
}