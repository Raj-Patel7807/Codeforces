#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    vector<int> ans(t);

    for(int i=0; i<t; ++i) {
        string str;
        cin >> str;

        ans[i] = (str[0]-'0')+(str[2]-'0');
    }
    for(auto i : ans) {
        cout << i << "\n";
    }
    
    return 0;
}