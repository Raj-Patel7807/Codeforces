/*
    Date : 17/10/2024
    Problem : 450A
    Status : completed;
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    
    int t = 1;
    // cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;

        vector<pair<int, int>> arr(n);
        for(int i=0; i<n; ++i) {
            int a;
            cin >> a;
            arr.push_back({a, i+1});
        }

        int ans = 0;
        while(!arr.empty()) {
            auto curr = arr.front();
            arr.erase(arr.begin());
            curr.first -= m;
            if(curr.first > 0) {
                arr.push_back({curr.first, curr.second});
            }
            ans = curr.second;
        }
        cout << ans << "\n";
    }

    return 0;
}