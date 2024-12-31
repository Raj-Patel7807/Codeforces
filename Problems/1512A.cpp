/*
    Date : 17/10/2024
    Problem : 1512A
    Status : completed;
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    
    int t = 1;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for(auto& i : arr) cin >> i;

        int ans = -1;

        if(arr[0] != arr[1] && arr[0] != arr[2]) {ans = 1;}
        else if(arr[n-1] != arr[n-2] && arr[n-1] != arr[n-3]) {ans = n;}
        else {
            for(int i=0; i<n; ++i) {
                if((i != 0 && arr[i] != arr[i-1]) && (i != n-1 && arr[i] != arr[i+1])) {
                    ans = i+1;
                }
            }
        }
        cout << ans << "\n";
    }

    return 0;
}