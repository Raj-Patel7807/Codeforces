#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i=0; i<n; ++i) {
        cin >> arr[i];
    }

    int currLen = 1;
    int maxLen = 1;
    for(int i=0; i<n-1; ++i) {
        if(arr[i] < arr[i+1]) {
            currLen++;
            maxLen = max(maxLen, currLen);
        } else {
            currLen = 1;
        }
    }
    cout << maxLen << "\n";
    
    return 0;
}