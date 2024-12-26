#include <iostream>
using namespace std;

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    int m = max(a, b); int mx = max(m, c);
    int m1 = min(a, b); int mn = min(m1, c);

    if(a > mn && a < mx) {cout << (mx - a) + (a - mn);}
    else if(b > mn && b < mx) {cout << (mx - b) + (b - mn);}
    else {cout << (mx - c) + (c - mn);}
    
    return 0;
}