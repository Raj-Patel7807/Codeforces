/*
    Date : 20/10/2024
    Problem : 1783A
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define u unsigned
#define fr(i, a, n) for(int i=a; i<=n; ++i)
#define frr(i, a, n) for(int i=a; i>=n; --i)
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define sz(v) (int)v.size()
#define srt(v) sort(v.begin(), v.end())
#define max(v) *max_element(v.begin(), v.end())
#define min(v) *min_element(v.begin(), v.end())
#define pb push_back
#define YES cout << "YES" << '\n'
#define NO cout << "NO" << '\n'
int MOD = 1e9+7;

void solve() {
    int n;
    cin >> n;
    vi arr(n);
    fr(i, 0, n-1) cin >> arr[i];

    srt(arr);

    if(arr[0] == arr[n-1]) {NO;}
    else {
        YES;
        cout << arr[n-1] << " ";
        fr(i, 0, n-2) {cout << arr[i] << " ";}
        cout << endl;
    }
}

signed main() {
    
    int t = 1;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}