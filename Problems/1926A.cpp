#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    vector<char> ans(t, 'A');

    for(int i=0; i<t; ++i) {
        string str;
        cin >> str;

        int a = 0, b = 0;

        for(int j=0; j<str.size(); ++j) {
            if(str[j] == 'A') {a++;}
            else {b++;}
        }
        if(a < b) {ans[i] = 'B';}
    }
    for(auto i : ans) {
        cout << i << "\n";
    }
    
    return 0;
}