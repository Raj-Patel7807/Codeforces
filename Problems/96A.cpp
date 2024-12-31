/*
    Date : 
    Problem : 
    Status : 
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

        int ans = 1;
        for(int i=1; i<str.size(); ++i) {
            if(str[i] == str[i-1]) {
                ans++;
                if(ans >= 7) {cout << "YES"; break;}
            } else {
                ans = 1;
            }
        }
        if(ans < 7) {cout << "NO";}    
    }

    return 0;
}