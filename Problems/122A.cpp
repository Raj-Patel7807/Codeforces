#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m;
    cin >> n;
    m = n;

    bool lucky = true;
    while(n > 0) {
        int digit = n % 10;
        if(digit != 4 && digit != 7) {
            lucky = false;
            break;
        }
        n /= 10;
    }
    if(lucky || m % 4 == 0 || m % 7 == 0 || m % 47 == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return 0;
}