#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> ans(n);

    for(int i=0; i<n; ++i) {
        int a; cin >> a;

        ans[i] = (a % 10) + ((a/10) % 10);
    }
    for(int i : ans) {cout << i << "\n";}
    
    return 0;
}