/*
    Date : 14/10/2024
    Problem : 131A
    Status : completed
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
        int n = str.size();

        bool allCap = true, firstNotCap = islower(str[0]);

        for(int i=1; i<n; ++i) {
            if(islower(str[i])) {
                allCap = false;
                firstNotCap = false;
                break;
            }
        }

        if(firstNotCap) {
            str[0] -= 32;
            for(int i=1; i<n; ++i) {
                str[i] += 32;
            }
        } else if(allCap) {
            for(int i=0; i<n; ++i) {
                str[i] += 32;
            }
         }

        cout << str << "\n";
    }

    return 0;
}