#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; 
    cin >> t;

    vector<int> ans(t, 0);

    for(int i=0; i<t; ++i) {
        int n;
        cin >> n;

        while(n > 0) {
            if(n >= 4) {
                n -= 4;
            } else {
                n -= 2;
            }
            ans[i]++;
        }
    }
    for(int i : ans) {
        cout << i << "\n";
    }
    
    return 0;
}