#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    vector<char> vec(n*m);

    for(int i=0; i<n*m; ++i) {
        cin >> vec[i];
    }

    for(char i : vec) {
        if(i == 'C' || i == 'M' || i == 'Y') {
            cout << "#Color";
            return 0;
        }
    }
    cout << "#Black&White";
    
    return 0;
}