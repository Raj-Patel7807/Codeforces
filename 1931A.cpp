/*
    Date : 14/10/2024
    Problem : 1931A
    Status : completed
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    
    int t = 1;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        string ans = "zzz";

        for(char i='a'; i<='z'; ++i) {
            for(char j='a'; j<='z'; ++j) {
                for(char k='a'; k<='z'; ++k) {
                    if((i-'a'+1) + (j-'a'+1) + (k-'a'+1) == n) {
                        string curr = {i, j, k};
                        ans = min(ans, curr);
                    }
                }
            }
        }
        cout << ans << "\n";
    }

    return 0;
}