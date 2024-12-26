/*
    Date : 13/10/2024
    Problem : 405A
    Status : completed;
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
        for(auto& i : arr) {cin >> i;}

        sort(arr.begin(), arr.end());

        for(auto i : arr) {cout << i << " ";}
    }

    return 0;
}