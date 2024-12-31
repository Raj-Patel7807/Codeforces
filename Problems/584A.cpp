/*
    Date : 14/10/2024
    Problem : 584A
    Status : 
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    
    int t = 1;
    // cin >> t;

    while(t--) {
        int n, t;
        cin >> n >> t;

        if(t == 10 && n == 1) {cout << -1 << "\n";}
        else if(t == 10) {
            cout << 1;
            for(int i=0; i<n-1; ++i) {
                cout << 0;
            }
        } else {
            for(int i=0; i<n; ++i) {
                cout << t;
            }
        }
    }

    return 0;
}