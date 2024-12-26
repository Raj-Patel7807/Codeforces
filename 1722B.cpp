#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    vector<string> ans(t, "YES");

    for(int i=0; i<t; ++i) {
        int n;
        cin >> n;

        string str1, str2;
        cin >> str1 >> str2;

        if(str1 == str2) {continue;}

        for(int j=0; j<n; ++j) {
            if(((str1[j]!='G'||str2[j]!='B') && (str1[j]!='B'||str2[j]!='G')) && (str1[j] != str2[j])) {
                ans[i] = "NO";
            }
        }
    }
    for(auto i : ans) {
        cout << i << "\n";
    }
    
    return 0;
}