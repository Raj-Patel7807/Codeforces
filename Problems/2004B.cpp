/////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    Code By : Raj Patel
    Date : 22/110/2024
    Problem : 2004B
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define u unsigned
#define stc static_cast
#define fr(i, a, n) for(int i=a; i<=n; ++i)
#define frr(i, a, n) for(int i=a; i>=n; --i)
#define vi vector<int>
#define vll vector<ll>
#define all(v) v.begin(), v.end()
#define sz(v) (int)v.size()
#define srt(v) sort(v.begin(), v.end())
#define maxEle(v) *max_element(v.begin(), v.end())
#define minEle(v) *min_element(v.begin(), v.end())
#define pb push_back
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define cout(i) cout << i << '\n'
const int MOD = 1e9+7;

ll gcd(ll a, ll b) {return (b == 0) ? a : gcd(b, a % b);}
ll lcm(ll a, ll b) {return (a / gcd(a, b)) * b;}
bool isPrime(ll n) {
    if(n<=1) return false; if(n<=3) return true; if(n%2==0 || n%3==0) return false;
    for(ll i=5; i*i<=n; i+=6) {if(n%i==0 || n%(i+2)==0) return false;}
    return true;
}
bool isPowerOfTwo(ll n) {return n > 0 && (n & (n-1)) == 0;}
bool isPerfectSquare(ll n) {if(n < 0) return false; ll sr = stc<int>(sqrt(n)); return (sr*sr == n);}

void solve() {
    int l, r, L, R;
    cin >> l >> r >> L >> R;

    ll mx = max(l, L);
    ll mn = min(r, R);
    ll len = mn - mx;
    ll ans = (len >= 0) ? len + (l != L) + (r != R) : 1;
    cout(ans);
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