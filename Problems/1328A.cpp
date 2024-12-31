#include <iostream>
using namespace std;

int main() {

    int n; 
    cin >> n;

    int ans[n] = {0};

    for(int i=0; i<n; ++i) {
        int a, b;
        cin >> a >> b;

        if(a % b == 0) {
            ans[i] = 0;
        } else {
            ans[i] = b - (a%b);
        }
    }

    for(int i=0; i<n; ++i) {
        cout << ans[i] << endl;
    }
    
    return 0;
}