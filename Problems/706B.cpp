/*
    Date : 15/10/2024
    Problem : 706B
    Status : completed;
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    
    int t = 1;
    // cin >> t;

    while(t--) {
        int n, d;

        cin >> n;
        vector<int> shop(n);
        for(auto& i : shop) cin >> i;

        cin >> d;
        vector<int> day(d);
        for(auto& i : day) cin >> i;

        sort(shop.begin(), shop.end());

        for(int i=0; i<d; ++i) {
            int ans = 0;
            int st = 0, end = n, mid;
            while(st < end) {
                mid = st + (end-st)/2;
                if(shop[mid] <= day[i]) {
                    st = mid + 1;
                } else {
                    end = mid;
                }
            }
            cout << st << "\n";
        }
    }

    return 0;
}