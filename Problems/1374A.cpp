#include <iostream>
#include <vector>
using namespace std;

int main() {

    int t;
    cin >> t;

    vector<int> ans(t);
    for(int i=0; i<t; ++i) {
        int x, y, n;
        cin >> x >> y >> n;

        int an = n - (n % x) + y;
        ans[i] = an;
        if(an > n) {ans[i] -= x;}
    }
    for(int i : ans) {cout << i << "\n";}
    
    return 0;
}