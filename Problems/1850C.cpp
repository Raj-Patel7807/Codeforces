#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    vector<string> ans(t);

    for(int i=0; i<t; ++i) {
        string str[8];
        string newStr;
        for(int j=0; j<8; ++j) {
            cin >> str[j];

            for(int k=0; k<8; ++k) {
                if(str[j][k] >= 'a' && str[j][k] <= 'z') {
                    newStr += str[j][k];
                }
            }
            ans[i] = newStr;
        }
    }
    for(string i : ans) {
        cout << i << "\n";
    }
    
    return 0;
}