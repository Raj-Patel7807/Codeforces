#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> ans(n);

    for(int i=0; i<n; ++i) {
        int k;
        cin >> k;

        int a = 1;
        int term = 0;
        while(term != k) {
            if(a % 3 != 0 && (a % 10) != 3) {
                ans[i] = a;
                ++term;
            }
            ++a;
        }
    }
    for(int i : ans) {
        cout << i << "\n";
    }
    
    return 0;
}