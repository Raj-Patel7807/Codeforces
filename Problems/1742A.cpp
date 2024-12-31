#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    bool ans[n] = {false};
    for(int i=0; i<n; ++i) {
        int a, b, c;
        cin >> a >> b >> c ;

        if(a+b==c || b+c==a || c+a==b) {ans[i] = true;}
    }

    for(int i=0; i<n; ++i) {
        if(ans[i]) {cout << "YES" << "\n";}
        else {cout << "NO" << "\n";}
    }
    
    return 0;
}