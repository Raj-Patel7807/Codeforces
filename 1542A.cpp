#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    vector<string> ans(t, "Yes");

    for(int i=0; i<t; ++i) {
        int n;
        cin >> n;

        vector<int> vec(2*n);
        int even = 0, odd = 0;

        for(int j=0; j<2*n; ++j) {
            cin >> vec[j];
            if(vec[j] % 2 == 0) {even++;}
            else {odd++;}
        }

        if(even != odd) {ans[i] = "No";}
    }
    for(auto i : ans) {
        cout << i << "\n";
    }
    
    return 0;
}