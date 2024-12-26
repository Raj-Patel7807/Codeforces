#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        string str1, str2;
        cin >> str1 >> str2;

        int n1 = str1.size(), n2 = str2.size();
        string newStr1, newStr2;

        int lcm = (n1*n2)/__gcd(n1, n2);

        for(int i=0; i<lcm/n1; ++i) {
            newStr1 += str1;
        } 
        for(int i=0; i<lcm/n2; ++i) {
            newStr2 += str2;
        }
        if(newStr1 == newStr2) {
            cout << newStr1 << "\n";
            continue;
        }
        cout << -1 << "\n";
    }
    
    return 0;
}