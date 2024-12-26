/*
    Date : 15/10/2024
    Problem : 25A
    Status : completed
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    
    int t = 1;
    // cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        int ans1 = 0, ans2 = 0, even = 0, odd = 0;
        for(int i=0; i<n; ++i) {
            cin >> arr[i];
            if(arr[i] % 2 == 0) {
                even++;
                ans1 = i;
            } else {
                odd++;
                ans2 = i;
            }
        }
        if(even == 1) {cout << ans1+1 << "\n";}
        else {cout << ans2+1 << "\n";}
    }

    return 0;
}