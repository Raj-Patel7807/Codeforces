#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    vector<string> ans(n);
    for(int i=0; i<n; ++i) {
        int a, b, c;
        cin >> a >> b >> c;

        if(a < b && b < c) {ans[i] = "STAIR";}
        else if(a < b && b > c) {ans[i] = "PEAK";}
        else {ans[i] = "NONE";}
    }
    for(string s : ans) {cout << s << "\n";}

    return 0;
}