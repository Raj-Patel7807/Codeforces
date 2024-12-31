/*
    Date : 15/10/2024
    Problem : 456A
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

        vector<pair<int, int>> arr(n);
        for(auto& i : arr) {cin >> i.first >> i.second;}

        sort(arr.begin(), arr.end());

        for(int i=0; i<n-1; ++i) {
            if(arr[i].second > arr[i+1].second) {
                cout << "Happy Alex";
                return 0;
            }
        }
        cout << "Poor Alex";
    }

    return 0;
}