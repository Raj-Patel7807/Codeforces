#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    vector<string> ans(t, "YES");

    for(int i=0; i<t; ++i) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int j=0; j<n; ++j) {
            cin >> arr[j];
        }

        for(int j=0; j<n; ++j) {
            for(int k=0; k<n; ++k) {
                if(j != k && arr[j] == arr[k]) {ans[i] = "NO";}
            }
        }
    }
    for(string i : ans) {
        cout << i << "\n";
    }
    
    return 0;
}