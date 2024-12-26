#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        long long total = 0;
        for(int i=0; i<n; ++i) {cin >> arr[i]; total += arr[i];}

        sort(arr.begin(), arr.end());

        if(n == 1 || n == 2) {cout << "-1\n"; continue;}

        cout << max((long long)0, (long long)arr[n/2]*2*n - total+1) << "\n";
    }
    
    return 0;
}