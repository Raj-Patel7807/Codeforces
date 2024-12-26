#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int even = 0, odd = 0;
        for(int i=0; i<n; ++i) {
            cin >> arr[i];
            if(arr[i] % 2 == 0) {even += arr[i];} 
            else {odd += arr[i];}
        }

        if(even > odd) {cout << "YES" << "\n";}
        else {cout << "NO" << "\n";}
    }
    
    return 0;
}