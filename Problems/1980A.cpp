/*
    Date : 19/10/2024
    Problem : 1980A
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define fr(i, n) for(int i=0; i<n; ++i)
#define v vector
#define pb push_back

void solution() {
    int n, m;
    string str;
    cin >> n >> m >> str;
    
    map<char, int> mp;
    fr(i, n) {
        mp[str[i]]++;
    }
    int ans = 0;
    for(char c='A'; c<='G'; ++c) {
        if(mp[c] < m) {
            ans += (m - mp[c]);
        }
    }
    cout << ans << endl;
}

signed main() {
    
    int t = 1;
    cin >> t;

    while(t--) {
        solution();
    }

    return 0;
}