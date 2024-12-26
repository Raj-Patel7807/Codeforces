/*
    Date : 14/10/2024
    Problem : 474A
    Status : 
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    
    int t = 1;
    // cin >> t;

    while(t--) {
        string STR = "qwertyuiopasdfghjkl;zxcvbnm,./";
        int m = STR.size();

        char ch;
        cin >> ch;
        string str;
        cin >> str;
        int n = str.size();
        vector<char> ans;

        for(int i=0; i<n; ++i) {
            for(int j=0; j<m; ++j) {
                if(str[i] == STR[j]) {
                    if(ch == 'L') {
                        ans.push_back(STR[j+1]);
                    } else {
                        ans.push_back(STR[j-1]);
                    }
                }
            }
        }
        for(auto i : ans) {cout << i;}
        cout << '\n';
    }

    return 0;
}