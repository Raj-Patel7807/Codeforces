#include <bits/stdc++.h>
using namespace std;

int main() {

    string str;
    cin >> str;

    int n = str.size();

    if((n==1 && str == "a") || (n==2 && str == "aa")) {
        cout << n;
        return 0;
    }
    if(n==2 && str != "aa") {
        cout << 1;
        return 0;
    }

    int a = 0;
    for(int i=0; i<n; ++i) {
        if(str[i] == 'a') {
            a++;
        }
    }
    if(a > n/2) {
        cout << n;
    } else {
        cout << a*2 - 1;
    }
    
    return 0;
}