/*
    Date : 15/10/2024
    Problem : 339B
    Status : completed
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    
    int t = 1;
    // cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;

        vector<int> arr(m);
        for(auto& i : arr) {cin >> i;}

        ll sum = arr[0] - 1;
        for(int i=1; i<m; ++i) {
            if(arr[i] >= arr[i-1]) {sum += (arr[i] - arr[i-1]);}
            else {sum += (arr[i] - arr[i-1] + n);}
        }
        cout << sum << '\n';
    }

    return 0;
}