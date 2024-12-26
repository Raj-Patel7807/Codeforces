#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        int sum = 0, sign = 1;
        for(int i=0; i<n; ++i) {
            cin >> arr[i];
            sum += sign*arr[i];
            sign *= -1;
        }
        cout << sum << "\n";
    }
    
    return 0;
}