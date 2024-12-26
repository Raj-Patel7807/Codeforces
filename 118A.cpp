/*
    Date : 13/10/2024;
    Problem : 118A;
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

        vector<char> newStr;

        for(int i=0; i<str.size(); ++i) {
            if(str[i] >= 'A' && str[i] <= 'Z') {str[i] += 32;}
            if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='y') {
                newStr.push_back(str[i]);
            }
        }
        for(char i : newStr) {
            cout << "." << i;
        }
    }

    return 0;
}