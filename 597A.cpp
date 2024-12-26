#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {

    ll k, a, b;
    cin >> k >> a >> b;

    if(a > b) {swap(a, b);}

    ll ans1 = b/k;
    ll ans2 = (a-1)/k;

    if(b % k != 0 && ((k < 0 && b > 0) || (k > 0 && b < 0))) {
        ans1 -= 1;
    }
    if((a-1) % k != 0 && ((k < 0 && a-1 > 0) || (k > 0 && a-1 < 0))) {
        ans2 -= 1;
    }

    cout << ans1 - ans2 << "\n";

    return 0;
}