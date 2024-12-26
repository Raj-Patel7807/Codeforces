/*
    Date : 15/10/2024
    Problem : 514A
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

        for(int i=0; i<str.size(); ++i) {
            int digit = str[i] - '0';
            if(digit > 9 - digit) {
                str[i] = '0' + (9 - digit);
            }
            if(i == 0 && str[i] == '0') {
                str[i] = '9';
            }
        }
        cout << str << "\n";
    }

    return 0;
}