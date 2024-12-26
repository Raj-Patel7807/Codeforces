// Problem : 1A - Theatre Square
#include <bits/stdc++.h>
using namespace std;

int main() {

    long long n, m, a;
    cin >> n >> m >> a;

    cout << ((n+a-1)/a)*((m+a-1)/a) << "\n";
    
    return 0;
}