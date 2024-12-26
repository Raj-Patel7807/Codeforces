#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    vector<int> ans(t);

    for(int i=0; i<t; ++i) {
        int a, b;
        cin >> a >> b;

        ans[i] = b-a;
    }
    for(auto i : ans) {
        cout << i << "\n";
    }
    
    return 0;
}