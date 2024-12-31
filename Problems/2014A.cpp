#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n, k, gold = 0, people = 0;
        cin >> n >> k;

        vector<int> arr(n);
        for(int& i : arr) {cin >> i;}

        for(int i=0; i<n; ++i) {
            if(arr[i] >= k) {gold += arr[i];}
            if(arr[i] == 0 && gold > 0) {
                gold--;
                people++;
            }
        }
        cout << people << "\n";
    }
    
    return 0;
}