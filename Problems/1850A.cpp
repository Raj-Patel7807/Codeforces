#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<string> ans(n, "NO");
    for(int i=0; i<n; ++i) {
        int a, b, c;
        cin >> a >> b >> c;

        if(a+b >= 10 || b+c >= 10 || a+c >= 10) {ans[i] = "YES";}
    }
    for(string i : ans) {
        cout << i << "\n";
    }
    
    return 0;
}