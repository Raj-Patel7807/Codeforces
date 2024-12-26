/*
    Date : 14/10/2024
    Problem : 1374C
    Status : completed;
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    
    int t = 1;
    cin >> t;

    while(t--) {
        int n;
        string str;
        cin >> n >> str;

        int ans = 0;

        for(int i=0; i<n; ++i) {
            if(str[i] == '(') {ans++;}
            if(ans != 0 && str[i] == ')') {ans--;}
        }
        cout << ans << "\n";
    }

    return 0;
}