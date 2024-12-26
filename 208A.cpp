/*
    Date : 10/10/2024
    Problem : 208A
    Status : Completed;
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

        vector<char> newStr;
        int space = 0;

        for(int i=0; i<str.size(); ++i) {
            if(i <= str.size()-3 && str[i]=='W' && str[i+1]=='U' && str[i+2]=='B') {
                if(str[i+3]=='W' && str[i+4]=='U' && str[i+5]=='B') {
                    i += 2;
                    continue;
                }
                if(newStr.size() != 0) {newStr.push_back(' ');}
                newStr.push_back(str[i+3]);
                i += 3;
            } else {
                newStr.push_back(str[i]);
            }
        }
        if(newStr[newStr.size()-1] < 'A' || newStr[newStr.size()-1] > 'Z') {newStr.erase(newStr.end()-1);}
        for(auto i : newStr) {cout << i;}
    }

    return 0;
}