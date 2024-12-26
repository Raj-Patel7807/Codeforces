/*
    Date : 17/10/2024
    Problem : 556A
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
        string str;
        cin >> n >> str;

        int one = 0, zero = 0;

        for(int i=0; i<n; ++i) {
            if(str[i] == '1') {one++;}
            else {zero++;}
        }

        cout << abs(one-zero) << "\n";
    }

    return 0;
}