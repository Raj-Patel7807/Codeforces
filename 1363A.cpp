/*
    Date : 15/10/2024
    Problem : 1363A
    Status : 
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    
    int t = 1;
    cin >> t;

    while(t--) {
        int n, x;
        cin >> n >> x;

        ll sum1 = 0, sum2 = 0;

        vector<int> arr(n);
        for(auto& i : arr) {
            cin >> i;
            if(i % 2 == 0) {sum1++;}
            else {sum2++;}
        }

        bool flag = false;
        for(int i=1; i<=x; i+=2) {
            if(i <= sum2 && (x-i) <= sum1) {
                flag = true;
                break;
            }
        }
        cout << (flag ? "Yes" : "No") << "\n";
    }

    return 0;
}