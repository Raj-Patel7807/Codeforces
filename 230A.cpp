/*
    Date : 14/10/2024
    Problem : 230A
    Status : completed;
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    
    int t = 1;
    // cin >> t;

    while(t--) {
        int s, n;
        cin >> s >> n;
        vector<pair<int, int>> arr(n);

        for(int i=0; i<n; ++i) {
            cin >> arr[i].first >> arr[i].second;
        }

        sort(arr.begin(), arr.end());

        for(int i=0; i<n; ++i) {
            if(s <= arr[i].first) {
                cout << "NO";
                return 0;
            }
            s += arr[i].second;
        }
        cout << "YES";
    }

    return 0;
}