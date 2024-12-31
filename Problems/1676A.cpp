#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<bool> ans(n, false);
    for(int i=0; i<n; ++i) {
        string str;
        cin >> str;

        if(str[0]+str[1]+str[2] == str[3]+str[4]+str[5]) {ans[i] = true;}
    }
    for(int i : ans) {
        if(i) {cout << "YES" << "\n";}
        else {cout << "NO" << "\n";}
    }
    
    return 0;
}