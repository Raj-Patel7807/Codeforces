/*
    Date : 19/10/2024
    Problem : 1185A
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define fr(i, n) for(int i=0; i<n; ++i)
#define v vector
#define pb push_back

void solution() {
    int n = 3;
    v<int> arr(n);
    fr(i, n) cin >> arr[i];
    int d;
    cin >> d;

    sort(arr.begin(), arr.end());

    int ans = 0;
    fr(i, n-1) {
        if(arr[i+1] - arr[i] >= d) {continue;}
        ans += abs(arr[i+1] - arr[i] - d);
    }
    cout << ans << endl;
}

signed main() {
    
    int t = 1;
    // cin >> t;

    while(t--) {
        solution();
    }

    return 0;
}