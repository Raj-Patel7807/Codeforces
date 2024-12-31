/*
    Date : 13/10/2024
    Problem : 133A
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
            if(str[i] == 'H' || str[i] == 'Q' || str[i] == '9') {
                cout << "YES";
                return 0;
            }
        }
        cout << "NO";
    }

    return 0;
}