#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> ans(n, 0);

    for(int i=0; i<n; ++i) {
        int a, b;
        cin >> a >> b;

        int dif = abs(b-a);

        ans[i] = (dif / 10) + (dif % 10 != 0);
    }
    for(int i : ans) {cout << i << "\n";}
    
    return 0;
}