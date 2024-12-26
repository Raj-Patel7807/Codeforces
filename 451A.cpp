/*
    Date : 15/10/2024
    Problem : 451A
    Status : completed
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    
    int t = 1;
    // cin >> t;

    while(t--) {
        int n ,m;
        cin >> n >> m;

        if(min(n, m) % 2 == 0) {
            cout << "Malvika";
        } else {
            cout << "Akshat";
        }
    }

    return 0;
}