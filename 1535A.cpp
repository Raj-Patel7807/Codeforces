#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    vector<string> ans(t, "YES");

    for(int i=0; i<t; ++i) {
        int arr[4];
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];

        if(max(arr[0], arr[1]) < min(arr[2], arr[3]) || max(arr[2], arr[3]) < min(arr[0], arr[1])) {
            ans[i] = "NO";
        }
    }
    for(auto i : ans) {
        cout << i << "\n";
    }
    
    return 0;
}