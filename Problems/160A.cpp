/*
    Date : 13/10/2024;
    Problem : 160A;
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
        int total = 0;
        for(int i=0; i<n; ++i) {cin >> arr[i]; total += arr[i];}

        sort(arr.begin(), arr.end(), greater<int>());

        int coins = 0;
        int newTotal = 0;
        for(int i=0; i<n; ++i) {
            total -= arr[i];
            newTotal += arr[i];
            coins++;
            if(total < newTotal) {
                break;
            }
        }
        cout << coins << "\n";        
    }

    return 0;
}