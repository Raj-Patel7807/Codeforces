/*
    Date : 16/10/2024
    Problem : 320A
    Status : completed;
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    
    int t = 1;
    // cin >> t;

    while(t--) {
        string str;
        cin >> str;

        if(str[0] != '1') {
            cout << "NO" << "\n";
            return 0;
        }

        for(int i=0; i<str.size(); ++i) {
            if(str[i] != '1' && str[i] != '4') {
                cout << "NO" << "\n";
                return 0;
            }
            if(i >= 2 && str[i] == '4' && str[i-1] == '4' && str[i-2] == '4') {
                cout << "NO" << "\n";
                return 0;
            }
        }
        cout << "YES" << "\n";
    }

    return 0;
}