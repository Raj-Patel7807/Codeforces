#include <iostream>
using namespace std;

bool isComposite(int n) {
    if(n == 0 || n == 1) return false;
    if(n == 2) return false;
    for(int i=2; i*i<=n; ++i) {
        if(n % i == 0) return true;
    }
    return false;
}

int main() {

    int n;
    cin >> n;

    int m = 1;
    while(1) {
        if(isComposite(m) && isComposite(n-m)) {
            cout << m  << " " << n-m;
            break;
        } else {
            ++m;
        }
    }
    
    return 0;
}