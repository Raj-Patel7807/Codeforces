#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> ans(n);
    for(int i=0; i<n; ++i) {
        int a, b, c;
        cin >> a >> b >> c;

        ans[i] = a ^ b ^ c;
    }

    for(int i : ans) {
        cout << i << "\n";
    }
    
    return 0;
}