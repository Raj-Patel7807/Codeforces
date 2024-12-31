#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    vector<int> ans(t, 0);

    for(int i=0; i<t; ++i) {
        int a;
        cin >> a;

        vector<int> vec(a);
        int count = 0;

        for(int j=0; j<a; ++j) {
            cin >> vec[j];
        }
        for(int j=0; j<a; ++j) {
            if(vec[j] == 0) {
                count++;
                ans[i] = max(count, ans[i]);
            } else {
                count = 0;
            }
        }
    }
    for(auto i : ans) {cout << i << "\n";}
    
    return 0;
}