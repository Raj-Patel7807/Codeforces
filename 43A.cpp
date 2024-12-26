/*
    Date : 13/10/2024;
    Problem : 43A;
    Status : Completed;
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

        vector<string> str(n);
        int team1 = 1, team2 = 0;
        string t2;
        for(int i=0; i<n; ++i) {
            cin >> str[i];
            if(i != 0 && str[i] == str[0]) {team1++;}
            else if(i != 0 && str[i] != str[0]) {team2++; t2 = str[i];}
        }
        if(n == 1) {cout << str[0]; continue;}
        if(team1 > team2) {cout << str[0];}
        else {cout << t2;}
    }

    return 0;
}