#include <iostream>
using namespace std;

int main() {

    string str = "codeforces";
    int n; 
    cin >> n;

    bool ans[n] = {false};
    for(int i=0; i<n; ++i) {
        char ch;
        cin >> ch;

        for(int j=0; j<str.size(); ++j) {
            if(ch == str[j]) {ans[i] = true;}
        }
    }

    for(int i=0; i<n; ++i) {
        if(ans[i]) {cout << "YES" << "\n";}
        else {cout << "NO" << "\n";}
    }
    
    return 0;
}