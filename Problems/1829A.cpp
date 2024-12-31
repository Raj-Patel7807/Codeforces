#include <iostream>
using namespace std;

int main() {

    string str = "codeforces";
    int n;
    cin >> n;

    int ans[n] = {0};
    for(int i=0; i<n; ++i) {
        string str1;
        cin >> str1;

        for(int j=0; j<str.size(); ++j) {
            if(str[j] != str1[j]) {ans[i]++;}
        }
    }

    for(int i=0; i<n; ++i) {
        cout << ans[i] << "\n";
    }
    
    return 0;
}