#include <bits/stdc++.h>
using namespace std;

int main() {

    long long n;
    cin >> n;

    n = abs(n);

    long long jumps = 0;
    long long N = 0;
    while(N < n || (N - n)%2 != 0) {
        jumps++;
        N += jumps;
    }
    cout << jumps << "\n";
    
    return 0;
}