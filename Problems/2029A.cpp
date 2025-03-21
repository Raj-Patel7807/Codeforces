/*
    Code By : Raj Patel
    Date : 13/11/2024
    Problem : 2029A
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define u unsigned
#define stc static_cast
#define fr(i, a, n) for(ll i=(a); i<=(n); ++i)
#define frr(i, a, n) for(ll i=(a); i>=(n); --i)
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
#define ff first
#define ss second
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define dbg(x) cerr << #x << " = " << (x) << '\n';
#define dbgArr(arr, n) { cerr << #arr << " = "; for(ll i=0; i<n; ++i) cerr << arr[i] << ' '; cerr << '\n'; }

const long long INF = 1e18 + 9;
const int MOD = 1e9 + 7;

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
ll power(ll a, ll b) {
    ll ans = 1; if(a >= MOD) { a %= MOD; }
    while(b > 0) { if(b & 1) { ans = (ans * a) % MOD; } a = (a * a) % MOD; b >>= 1; }
    return ans;
}
bool isPowOfTwo(ll n) { return n > 0 && (n & (n-1)) == 0; }
bool isPerfectSq(ll n) { if(n < 0) return false; ll sr = stc<int>(sqrt(n)); return (sr*sr == n); }
bool cmpBySs(const pair<int, int>& a, const pair<int, int>& b) { return a.second < b.second; }
ll modSum(ll a, ll b) { return (a % MOD + b % MOD) % MOD; }
ll modSub(ll a, ll b) { return ((a % MOD - b % MOD) + MOD) % MOD; }
ll modMul(ll a, ll b) { return (a % MOD * b % MOD) % MOD; }
ll turnOnBit(ll n, int pos) { return n | (1LL << pos); }
ll turnOffBit(ll n, int pos) { return n & ~(1LL << pos); }
bool checkBit(ll n, int pos) { return n & (1LL << pos); }

void solve() {
    ll l, r, k;
    cin >> l >> r >> k;

    ll s = l;
    ll e = r;
    ll mid = s + (e - s)/2;

    ll ans = 0;
    while(s <= e) {
        mid = s + (e - s)/2;
        if(mid*k > r) {
            e = mid - 1;
        } else if(mid*k <= r) {
            s = mid + 1;
            ans = mid;
        }
    }
    ll a = ans - l + 1;
    if(a < 0) {a = 0;}
    cout << a << endl;
}

signed main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}