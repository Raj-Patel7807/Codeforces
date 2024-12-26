#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    vector<int> ans(t, -1);

    for(int i=0; i<t; ++i) {
        int n;
        cin >> n;

        vector<int> arr(n);
        unordered_map<int, int> mp;

        for(int j=0; j<n; ++j) {
            cin >> arr[j];
            mp[arr[j]]++;
        }

        int a = -1;
        for(auto& i : mp) {
            if(i.second >= 3) {
                a = i.first;
                break;
            }
        }
        ans[i] = a;
    }
    for(int i : ans) {
        cout << i << "\n";
    }
    
    return 0;
}