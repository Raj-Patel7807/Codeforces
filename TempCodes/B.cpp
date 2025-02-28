/*╔═════════════════════════════════════════════════╗*\
  ║                                                 ║
  ║                 @Raj_Patel_7807                 ║
  ║               Code By : Raj_Patel               ║
  ║                                                 ║
\*╚═════════════════════════════════════════════════╝*/

#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
using namespace std;

// #ifndef ONLINE_JUDGE
//     #include "../Header/debug.hpp"
// #else
//     #define debug(...) 7807
// #endif

// #define FOR1(s) for(ll i=0; i<(s); ++i)
// #define FOR2(i, s) for(ll i=0; i<(s); ++i)
// #define FOR3(i, s, e) for(ll i=(s); i<(e); ++i)
// #define FOR4(i, s, e, inc) for(ll i=(s); i<(e); i+=(inc))
// #define FORR1(s) for(ll i=(s)-1; i>=0; --i)
// #define FORR2(i, s) for(ll i=(s)-1; i>=0; --i)
// #define FORR3(i, s, e) for(ll i=(s)-1; i>=(e); --i)
// #define GET_FOR(a, b, c, d, LOOP, ...) LOOP
// #define GET_FORR(a, b, c, LOOP, ...) LOOP
// #define FOR(...) GET_FOR(__VA_ARGS__, FOR4, FOR3, FOR2, FOR1)(__VA_ARGS__)
// #define FORR(...) GET_FORR(__VA_ARGS__, FORR3, FORR2, FORR1)(__VA_ARGS__)
// #define FORE(x, a) for(auto& x : (a))

// template <typename... T> inline void INPUT(T&... args) { ((cin >> args), ...); }
// template <typename... T> inline void OUTPUT(bool F, T&&... args) { ((cout << args << (F ? '\n' : ' ')), ...); }
// #define IN(T, ...) T __VA_ARGS__; INPUT(__VA_ARGS__);
// #define OUT(...) OUTPUT(true, __VA_ARGS__);
// #define OUTT(...) OUTPUT(false, __VA_ARGS__);
// #define VIN(T, name, n) vector<T> name(n); for(ll i=0; i<(n); ++i) cin >> name[i];
// #define VVIN(T, name, n, m) vector<vector<T>> name(n, vector<T>(m)); FOR(i, n) FOR(j, m) cin >> name[i][j];
// #define VOUT(a) for(auto x : a) { cout << x << ' '; } cout << '\n';
// inline void YES(bool F = true, bool S = false) { cout << (F ? (S ? "Yes\n" : "YES\n") : (S ? "No\n" : "NO\n")); }
// inline void NO(bool F = true, bool S = false) { cout << (F ? (S ? "No\n" : "NO\n") : (S ? "Yes\n" : "YES\n")); }

#define endl '\n'
#define ln cout << '\n';
#define PB push_back
#define EB emplace_back
#define ins insert
#define PPB pop_back
#define MP make_pair
#define FF first
#define SS second
#define UB(v, a) upper_bound((v).begin(), (v).end(), (a))
#define LB(v, a) lower_bound((v).begin(), (v).end(), (a))
#define LEN(x) ll((x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define ssort(x) sort((x).begin(), (x).end())
#define rsort(x) sort((x).rbegin(), (x).rend())
#define maxval(v) *max_element((v).begin(), (v).end())
#define minval(v) *min_element((v).begin(), (v).end())
#define maxid(v) max_element((v).begin(), (v).end()) - ((v).begin())
#define minid(v) min_element((v).begin(), (v).end()) - ((v).begin())

inline void SETUP_IO(bool FILE_IO = true) {
    ios_base :: sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    if(FILE_IO) {
        #ifndef ONLINE_JUDGE
            freopen("Input.txt", "r", stdin);
            freopen("Output.txt", "w", stdout);
            freopen("Debug.txt", "w", stderr);
        #endif
    }
}

//==========^==========<<   C O D E   B Y   R A J  P A T E L   >>==========^==========//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long int n,x,k;
    cin>>n>>x>>k;
    k++;
    string s;
    cin>>s;

    map<int, int> mp;
    stack<int> st;

    long long int pos=x,t1=1,flag1=0,cnt1=1e18;
    long long int org=0,t2=0,flag2=0,cnt2=1e18;
    for(int i=0;i<n;i++){
        if(s[i]=='R'){
            pos++;
            if(!flag1){
                t1++;
            }
            if(pos==0){
                cnt1=t1;
                flag1=1;
            }
            org++;
            if(!flag2){
                t2++;
            }
            if(org==0){
                cnt2=t2;
                flag2=1;
            }
        }
        else{
            pos--;
            if(!flag1){
                t1++;
            }
            if(pos==0){
                cnt1=t1;
                flag1=1;
            }
            org--;
            if(!flag2){
                t2++;
            }
            if(org==0){
                cnt2=t2;
                flag2=1;
            }
        }
        if(i==n-1){
            if(!flag1){
                cout<<0<<endl;
                return;
            }
            else if(!flag2){
                cout<<1<<endl;
                return;
            }
        }
    }
    long long int ans=0;
    if(x==0){
        ans++;
    }
    if(k<cnt1){
        ans+=0;
    }
    else{
        ans+=1;
        long long int y=k-t1;
        ans+=y/cnt2;
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}

// NOTE:
// rotate(v.begin(), v.begin()+v.size()-r, v.end()); - for rotating vector r times right;
// rotate(v.begin(), v.begin()+r, v.end()); - For rotating vector r times left;
// For `idset`:
//     find_by_order(k) - O(log n) - Find the k-th smallest element (0-based index);
//     order_of(value) - O(log n) - Find the index of a value in the sorted set;
//     Can find the k-th smallest element, or get the position of a value in sorted order;
// xor[l, r] = xor[l - 1] ^ xor[r]
