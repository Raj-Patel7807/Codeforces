#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n, ans = 0;
    cin >> n;
    vector<int> vec(n);
    int mx = 0;
    for(int i=0; i<n; ++i) {
        cin >> vec[i];
        mx = max(mx, vec[i]);
    }

    for(int i : vec) {
        ans += (mx - i);
    }

    cout << ans;
    
    return 0;
}