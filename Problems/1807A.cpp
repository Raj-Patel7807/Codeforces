#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    char ans[n];
    for(int i=0; i<n; ++i) {
        int a, b, c;
        cin >> a >> b >> c;

        if(a + b == c) {ans[i] = '+';}
        else {ans[i] = '-';}
    }
    for(int i=0; i<n; ++i) {
        cout << ans[i] << "\n";
    }    
    return 0;
}