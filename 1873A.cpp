#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<string> ans(n, "NO");
    for(int i=0; i<n; ++i) {
        string str;
        cin >> str;

        if(str[0] == 'a') {ans[i] = "YES";}
        else if(str[0] == 'b' && str[1] == 'a') {ans[i] = "YES";}
        else if(str[0] == 'c' && str[1] == 'b') {ans[i] = "YES";}
    }

    for(string s : ans) {cout << s << "\n";}
    
    return 0;
}