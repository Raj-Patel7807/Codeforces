#include <iostream>
using namespace std;

int main() {

    int n, ans = 0, curr = 0;
    cin >> n;
    
    for(int i=0; i<n; ++i) {
        int a, b;
        cin >> a >> b;

        curr += (b-a);
        ans = max(ans, curr);
    }

    cout << ans << endl;
    
    return 0;
}