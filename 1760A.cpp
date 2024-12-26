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

        if(a > b && b > c || c > b && b > a) {ans[i] = b;}
        else if(b > a && a > c || c > a && a > b) {ans[i] = a;}
        else {ans[i] = c;}
    }
    for(int i : ans) {
        cout << i << "\n";
    }
    
    return 0;
}