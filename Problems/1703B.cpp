#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    vector<int> ans(t);

    for(int i=0; i<t; ++i) {
        int s;
        string str;
        cin >> s >> str;

        set<char> st;
        for(int j=0; j<s; ++j) {
            st.insert(str[j]);
        }

        ans[i] = (st.size()*2) + (s-st.size());
    }
    for(int i : ans) {
        cout << i << "\n";
    }
    
    return 0;
}