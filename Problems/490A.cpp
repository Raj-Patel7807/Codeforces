/*
    Code By : Raj Patel
    Date : 31/10/2024
    Problem : 490A
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define u unsigned
#define stc static_cast
#define fr(i, a, n) for(ll i=a; i<=n; ++i)
#define frr(i, a, n) for(ll i=a; i>=n; --i)
#define v vector
#define vi vector<int>
#define vll vector<ll>
#define all(v) v.begin(), v.end()
#define sz(v) (int)v.size()
#define srt(v) sort(v.begin(), v.end())
#define maxEle(v) *max_element(v.begin(), v.end())
#define minEle(v) *min_element(v.begin(), v.end())
#define pb push_back
#define mp make_pair
#define bitcount __builtin_popcountll
#define fi first
#define se second
#define YES cout << "YES\n"
#define NO cout << "NO\n"

const long long INF = 1e18 + 9;
const int MAX = 1000001;
const int MOD = 1e9+7;

template<typename typC, typename typD>
istream& operator>>(istream& cin, pair<typC, typD>& a) { return cin >> a.first >> a.second; }
template<typename typC>
istream& operator>>(istream& cin, vector<typC>& a) { for(auto& x : a) cin >> x; return cin; }
template<typename typC, typename typD>
ostream& operator<<(ostream& cout, const pair<typC, typD>& a) { return cout << a.first << ' ' << a.second; }
template<typename typC>
ostream& operator<<(ostream& cout, const vector<typC>& a) { for(const auto& x : a) cout << x << ' '; return cout; }

ll gcd(ll a, ll b) { return (b == 0) ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
bool isPrime(ll n) {
    if(n <= 1) return false; if(n <= 3) return true; if(n % 2 == 0 || n % 3 == 0) return false;
    for(ll i=5; i*i<=n; i+=6) { if(n % i == 0 || n % (i+2) == 0) return false;}
    return true;
}
bool isPowOfTwo(ll n) { return n > 0 && (n & (n-1)) == 0; }
bool isPerfectSq(ll n) { if(n < 0) return false; ll sr = stc<int>(sqrt(n)); return (sr*sr == n); }

void solve() {
    int n;
    cin >> n;

    vi t1, t2, t3;
    for(int i=1; i<=n; ++i) {
        int sk; cin >> sk;
        if(sk == 1) {t1.pb(i);}
        else if(sk == 2) {t2.pb(i);}
        else {t3.pb(i);}
    }
    int team = min({t1.size(), t2.size(), t3.size()});
    cout << team << endl;

    for(int i=0; i<team; i++) {
        cout << t1[i] << ' ' << t2[i] << ' ' << t3[i] << endl;
    }
}

signed main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    // cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}