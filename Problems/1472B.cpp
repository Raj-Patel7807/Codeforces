#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n; 
    cin >> n;
    vector<bool> ans(n, false);
    for(int i=0; i<n; ++i) {
        int k;
        cin >> k;
        vector<int> a(k);
        int total = 0;
        int ones = 0;
        for(int j=0; j<k; ++j) {
            cin >> a[j];
            total += a[j];
            if(a[j] == 1) {ones++;}
        }
        if(total % 2 == 0) {
            if(total/2 % 2 == 0 || (total/2 % 2 == 1) && ones > 1) {
                ans[i] = true; 
            }
        }
    }

    for(int i=0; i<n; ++i) {
        if(ans[i]) {cout << "YES" << "\n";}
        else {cout << "NO" << "\n";}
    }
    
    return 0;
}