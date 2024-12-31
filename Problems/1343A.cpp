/////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    Code By : Raj Patel
    Date : 
    Problem : 
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
    ll n;
    cin >> n;

    ll i = 2;
    while(1) {
        ll sum = (ll)pow(2, i) - 1;
        if(n % sum == 0) {cout << n / sum << endl; return;}
        i++;
    }
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