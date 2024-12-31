#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    vector<int> ans(t);

    for(int i=0; i<t; ++i) {
        int n, x;
        cin >> n >> x;

        if(n == 1 || n == 2) {
            ans[i] = 1;
            continue;
        }

        int apt = 2, floor = 1;

        while(1) {
            if(apt >= n) {
                ans[i] = floor;
                break;
            } else {
                apt += x;
            }
            floor++;
        }
    }
    for(int i : ans) {
        cout << i << "\n";
    }
    
    return 0;
}