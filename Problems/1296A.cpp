#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    for(int i=0; i<t; ++i) {
        int n;
        cin >> n;

        vector<int> vec(n);
        bool even = false;
        bool odd = false;
        int sum = 0;

        for(int j=0; j<n; ++j) {
            cin >> vec[j];
            sum += vec[j];
            if(vec[j] % 2 == 0) {even = true;}
            else {odd = true;}
        }
        if(sum % 2 != 0 || (even && odd)) {cout << "YES" << "\n";}
        else {cout << "NO" << "\n";}
    }
    
    return 0;
}