#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    vector<string> ans(t, "NO");

    for(int i=0; i<t; ++i) {
        int n;
        cin >> n;

        vector<int> arr(n);
        long long sum = 0;
        for(int j=0; j<n; ++j) {
            cin >> arr[j];
            sum += arr[j];
        }
        if(round(sqrt(sum))*round(sqrt(sum)) == sum) {ans[i] = "YES";}
    }
    for(auto i : ans) {
        cout << i << "\n";
    }
    
    return 0;
}