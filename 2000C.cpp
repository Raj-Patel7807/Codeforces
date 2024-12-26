//=======================^===================================================================^=======================\\

/*

                                  * * * * * *       * * * * * *     * * * * * * * * * *                                 
                                * * * * * * * *   * * * * * * * *   * * * * * * * * * *                                 
                                * * *     * * *   * * *     * * *   * * * * * * * * * *                                 
                                * * *     * * *   * * *     * * *           * * *                                       
                                * * *     * * *   * * *     * * *           * * *                                       
                                * * * * * * * *   * * * * * * * *           * * *                                       
                                * * * * * * *     * * * * * * * *           * * *                                       
                                * * * * *         * * * * * * * *           * * *                                       
                                * * * * * *       * * *     * * *           * * *                                       
                                * * *  * * *      * * *     * * *   * * *   * * *                                       
                                * * *   * * *     * * *     * * *   * * *   * * *                                       
                                * * *    * * *    * * *     * * *    * * * * * *                                        
                                * * *     * * *   * * *     * * *     * * * * *                                         

*/

//=======================^===================================================================^=======================\\

/*
    Code By : Raj_Patel
    Date : 15/12/2024
    Problem : 2000C
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define Author ios :: sync_with_stdio(false);
#define is cin.tie(nullptr);
#define RAJ_PATEL cout.tie(nullptr)

using ll = long long int;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;
using pl = pair<ll, ll>;
using ml = map<ll, ll>;
using uml = unordered_map<ll, ll>;
using stl = stack<ll>;
using ql = queue<ll>;
using pql = priority_queue<ll>;
using sl = set<ll>;
using usl = unordered_set<ll>;

// Loops
#define fo(i, s, e) for(ll i=(s); i<=(e); ++i)
#define rfo(i, s, e) for(ll i=(s); i>=(e); --i)
#define ft(x, a) for(auto x : (a))
#define fq(q) while((q)--)

// Inputs
#define in(n) ll n; cin >> n;
#define inn(n, k) ll n, k; cin >> n >> k;
#define strin(s) string s; cin >> s;
#define vin(a, n) vl a(n); for(ll i=0; i<(n); ++i) cin >> a[i];

// Outputs
#define cy printf("YES\n")
#define cn printf("NO\n")
#define out(n) cout << (n) << '\n';
#define outt(n, k) cout << (n) << ' ' << (k) << '\n';
#define vout(a) for(auto x : a) { cout << x << ' '; } cout << endl;

// STL
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define ub upper_bound
#define lb lower_bound
#define all(x) x.begin(), x.end()
#define sortall(x) sort(x.begin(), x.end())
#define maxel(v) *max_element(v.begin(), v.end())
#define minel(v) *min_element(v.begin(), v.end())

// Constants
#define PI 3.1415926535897932384626
const ll INF = 1e18 + 9;
const ll MOD = 1e9 + 7;
const ll MOD1 = 998244353;

// Debugging
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = "; _print(x); cerr << '\n';
#else
#define debug(x)
#endif
template <typename T> void _print(T t) { cerr << t; }
template <typename T, typename V> void _print(pair <T, V> p) { cerr << "{ "; _print(p.ff); cerr << ", "; _print(p.ss); cerr << "}"; }
template <typename T> void _print(vector <T> v) { cerr << "[ "; for (T i : v) {_print(i); cerr << ' ';} cerr << "]"; }
template <typename T> void _print(set <T> v) { cerr << "[ "; for (T i : v) {_print(i); cerr << ' ';} cerr << "]"; }
template <typename T> void _print(multiset <T> v) { cerr << "[ "; for (T i : v) {_print(i); cerr << ' ';} cerr << "]"; }
template <typename T, typename V> void _print(map <T, V> v) { cerr << "[ "; for (auto i : v) {_print(i); cerr << ' ';} cerr << "]"; }

// Functions
#define countBit __builtin_popcount
#define countBitll __builtin_popcountll
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
bool isPerfectSq(ll n) { if(n < 0) return false; ll sr = static_cast<int>(sqrt(n)); return (sr*sr == n); }
bool compbyss(const pair<int, int>& a, const pair<int, int>& b) { if(a.second == b.second) { return a.first < b.first; } return a.second < b.second; }
ll modSum(ll a, ll b) { return (a % MOD + b % MOD) % MOD; }
ll modSub(ll a, ll b) { return ((a % MOD - b % MOD) + MOD) % MOD; }
ll modMult(ll a, ll b) { return (a % MOD * b % MOD) % MOD; }
ll turnOnBit(ll n, int pos) { return n | (1LL << pos); }
ll turnOffBit(ll n, int pos) { return n & ~(1LL << pos); }
bool checkBit(ll n, int pos) { return n & (1LL << pos); }

//=======================^===================================================================^=======================\\

void solve() {
    in(n);
    vin(a, n);
    in(m);

    fq(m) {
        strin(s);
        
        if(s.size() != n) {
            cn;
            continue;
        }

        bool flag = true;
        fo(i, 0, n-1) {
            if((find(all(s), s[i]) - s.begin()) != (find(all(a), a[i]) - a.begin())) {
                flag = false;
                break;
            }
        }

        if(flag) {cy;}
        else {cn;}
    }
}

signed main() {

    Author is RAJ_PATEL;

    // #ifndef ONLINE_JUDGE
    //     freopen("Input.txt", "r", stdin);
    //     freopen("Output.txt", "w", stdout);
    //     freopen("Error.txt", "w", stderr);
    // #endif

    ll tt = 1;
    cin >> tt;

    while(tt--) {
        solve();
    }

    return 0;
}