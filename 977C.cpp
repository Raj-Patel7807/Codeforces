/*
    Date : 16/10/2024
    Problem : 977C
    Status : completed;
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    
    int t = 1;
    // cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for(auto& i : arr) cin >> i;

        sort(arr.begin(), arr.end());

        if(k == 0) {
            if(arr[0] > 1) {cout << arr[0]-1 << "\n";}
            else {cout << -1 << "\n";}
        } else if(k == n || (k < n && arr[k-1] < arr[k])) {
            cout << arr[k-1] << "\n";
        } else {
            cout << -1 << "\n";
        }
    }

    return 0;
}