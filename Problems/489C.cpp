/////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    Code By : Raj Patel
    Date : 22/10/2024
    Problem : 489C
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
    int m, s;
    cin >> m >> s;

    if(s == 0 && m > 1 || 9*m < s) {
        cout << "-1 -1" << endl;
        return;
    }

    vll ans1(m, 0), ans2(m, 0);
    int sum = s;
    for(int i=0; i<m; ++i) {
        if(sum > 0) {
            int dig = max(0, sum - 9*(m-i-1));
            ans1[i] = dig;
            sum -= dig;
        }
    }
    if(ans1[0] == 0) {
        fr(i, 1, m-1) {
            if(ans1[i] > 0) {
                ans1[i]--;
                ans1[0] = 1;
                break;
            }
        }
    }
    sum = s;
    for(int i=0; i<m; ++i) {
        if(sum > 0) {
            int dig = min(9, sum);
            ans2[i] = dig;
            sum -= dig;
        }
    }

    fr(i, 0, m-1) {cout << ans1[i];}
    cout << " ";
    fr(i, 0, m-1) {cout << ans2[i];}
    cout << endl;
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