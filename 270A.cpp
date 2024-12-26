/*
    Date : 15/10/2024
    Problem : 270A
    Status : completed;
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    
    int t = 1;
    cin >> t;

    while(t--) {
        int a;
        cin >> a;

        if(360 % (180 - a) == 0) {cout << "YES" << "\n";}
        else {cout << "NO" << "\n";}
    }

    return 0;
}