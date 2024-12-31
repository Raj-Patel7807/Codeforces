/*
    Date : 16/10/2024
    Problem : 1475A
    Status : completed;
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    
    int t = 1;
    cin >> t;

    while(t--) {
        ll n;
        cin >> n;

        if(n && !(n & (n-1))) {cout << "NO" << "\n";}
        else {cout << "YES" << "\n";}
    }

    return 0;
}