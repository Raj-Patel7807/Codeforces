/*
    Code By : Raj Patel
    Date : 18/11/2024
    Problem : ICPC2425_C
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define U unsigned
#define stc static_cast
#define uo unordered
#define fr(i, l, r) for(long long i=(l); i<=(r); ++i)
#define frr(i, l, r) for(long long i=(l); i>=(r); --i)
#define V vector
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define mii map<int, int>
#define mll map<long long, long long>
#define vvi vector<vector<int>>
#define vvl vector<vector<long long>>
#define all(v) v.begin(), v.end()
#define sz(v) (int)v.size()
#define srt(v) sort(v.begin(), v.end())
#define maxEle(v) *max_element(v.begin(), v.end())
#define minEle(v) *min_element(v.begin(), v.end())
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define bitcount __builtin_popcountll
#define ff first
#define ss second
#define YES cout << "YES\n"
#define NO cout << "NO\n"

const long long INF = 1e18 + 9;
const long long MOD = 1e9 + 7;
const long long MOD1 = 998244353;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

template <typename T> void _print(T t) { cerr << t; }
template <typename T, typename V> void _print(pair <T, V> p) { cerr << "{ "; _print(p.ff); cerr << ", "; _print(p.ss); cerr << " }"; }
template <typename T> void _print(vector <T> v) { cerr << "[ "; for (T i : v) {_print(i); cerr << ' ';} cerr << " ]"; }
template <typename T> void _print(set <T> v) { cerr << "[ "; for (T i : v) {_print(i); cerr << ' ';} cerr << " ]"; }
template <typename T> void _print(multiset <T> v) { cerr << "[ "; for (T i : v) {_print(i); cerr << ' ';} cerr << " ]"; }
template <typename T, typename V> void _print(map <T, V> v) { cerr << "[ "; for (auto i : v) {_print(i); cerr << ' ';} cerr << " ]"; }

template<typename T, typename V> istream& operator>>(istream& cin, pair<T, V>& a) { return cin >> a.first >> a.second; }
template<typename T> istream& operator>>(istream& cin, vector<T>& a) { for(auto& x : a) cin >> x; return cin; }
template<typename T, typename V> ostream& operator<<(ostream& cout, const pair<T, V>& a) { return cout << a.first << ' ' << a.second; }
template<typename T> ostream& operator<<(ostream& cout, const vector<T>& a) { for(const auto& x : a) cout << x << ' '; return cout; }

ll gcd(ll a, ll b) { return (b == 0) ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
bool isPrime(ll n) {
    if(n <= 1) return false; if(n <= 3) return true; if(n % 2 == 0 || n % 3 == 0) return false;
    for(ll i=5; i*i<=n; i+=6) { if(n % i == 0 || n % (i+2) == 0) return false;}
    return true;
}
ll power(ll a, ll b) {
    ll ans = 1; a %= MOD;
    while(b > 0) { if(b & 1) { ans = (ans * a) % MOD; } a = (a * a) % MOD; b >>= 1; }
    return ans;
}
bool isPowOfTwo(ll n) { return n > 0 && (n & (n-1)) == 0; }
bool isPerfectSq(ll n) { if(n < 0) return false; ll sr = stc<int>(sqrt(n)); return (sr*sr == n); }
bool cmpBySs(const pair<int, int>& a, const pair<int, int>& b) { return a.second < b.second; }
ll modSum(ll a, ll b) { return (a % MOD + b % MOD) % MOD; }
ll modSub(ll a, ll b) { return ((a % MOD - b % MOD) + MOD) % MOD; }
ll modMult(ll a, ll b) { return (a % MOD * b % MOD) % MOD; }
ll turnOnBit(ll n, int pos) { return n | (1LL << pos); }
ll turnOffBit(ll n, int pos) { return n & ~(1LL << pos); }
bool checkBit(ll n, int pos) { return n & (1LL << pos); }

void solve() {
    ll n;
    cin >> n;

    vll a(n);
    cin >> a;

    mll mp;
    fr(i, 0, n-1) {
        mp[a[i]]++;
    }
    vll b;
    for(auto i : mp) {
        if(!(i.ss & 1) || i.ss > 1) {
            if(i.ss % 2 == 0) {
                fr(j, 1, i.ss) {
                    b.pb(i.ff);
                }
            } else {
                fr(j, 1, i.ss-1) {
                    b.pb(i.ff);
                }
            }
        }
    }
    ll z = sz(b);
    if(z < 8) {NO; return;}
    YES;
    cout << b[0] << ' ' << b[2] << ' ';
    cout << b[1] << ' ' << b[z-1] << ' ';
    cout << b[z-3] << ' ' << b[3] << ' ';
    cout << b[z-4] << ' ' << b[z-2] << endl;
}

signed main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    // #ifndef ONLINE_JUDGE
    //     freopen("Input.txt", "r", stdin);
    //     freopen("Output.txt", "w", stdout);
    //     freopen("Error.txt", "w", stderr);
    // #endif

    int t = 1;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}