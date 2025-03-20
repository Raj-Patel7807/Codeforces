#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
#define endl '\n'

void solve() {
     ll n, k;
        cin >> n >> k;
        if (!(n & 1)) {
            cout << (n + k - 2) / (k - 1) << endl;
        } else {
            cout << ((n - k) + k - 2) / (k - 1) + 1<< endl;
        }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("D:/Code_PlayGround/C++/Input.txt", "r", stdin);
        freopen("D:/Code_PlayGround/C++/Output.txt", "w", stdout);
        freopen("D:/Code_PlayGround/C++/Debug.txt", "w", stderr);
    #endif

    ll tt; cin >> tt;
    while(tt--) solve();

    return 0;
}
