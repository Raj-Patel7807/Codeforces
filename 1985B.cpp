#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    vector<int> ans(t, 0);

    for(int i=0; i<t; ++i) {
        int n;
        cin >> n;

        int maxSum = 0;
        for(int j=2; j<=n; ++j) {
            int sum = 0;
            for(int k=1; k*j<=n; ++k) {
                sum += k*j;
            }
            if(maxSum < sum) {
                maxSum = sum;
                ans[i] = j;
            }
        }
    }
    for(int i : ans) {
        cout << i << "\n";
    }
    
    return 0;
}