/*
    Date : 16/10/2024
    Problem : 4C - Registration System
    Status : completed;
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    
    int t = 1;
    // cin >> t;

    while(t--) {
        int n;
        cin >> n;
        
        vector<string> strs(n);
        unordered_map<string, int> mp;
        for(auto& i : strs) cin >> i;

        for(int i=0; i<n; ++i) {
            if(mp.find(strs[i]) == mp.end()) {
                cout << "OK" << "\n";
                mp[strs[i]] = 1;
            } else {
                string newStr;
                int count = mp[strs[i]];
                while(1) {
                    newStr = strs[i] + to_string(count);
                    if(mp.find(newStr) == mp.end()) {
                        break;
                    }
                    count++;
                }
                cout << newStr << "\n";
                mp[strs[i]] = count + 1;
                mp[newStr] = 1;
            }
        }
    }

    return 0;
}