#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a%b);
}

int main() {

    int n;
    cin >> n;

    vector<int> ans(n, -1);

    for(int i=0; i<n; ++i) {
        int a;
        cin >> a;

        ans[i] = a/2;
    }
    for(int i : ans) {cout << i << "\n";}
    
    return 0;
}