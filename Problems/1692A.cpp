#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int ans[n] = {0};
    for(int i=0; i<n; ++i) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if(a < b) {ans[i]++;}
        if(a < c) {ans[i]++;}
        if(a < d) {ans[i]++;}
    }

    for(int i=0; i<n; ++i) {
        cout << ans[i] << "\n";
    }
    
    return 0;
}