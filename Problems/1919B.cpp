/*
    Date : 14/10/2024
    Problem : 1919B
    Status : 
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    
    int t = 1;
    cin >> t;

    while(t--) {
        int n;
        string str;
        cin >> n >> str;

        int plus = 0, minus = 0;

        for(int i=0; i<n; ++i) {
            if(str[i] == '+') {plus++;}
            else {minus++;}
        }
        cout << abs(plus-minus) << "\n";
    }

    return 0;
}