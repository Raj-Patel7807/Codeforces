#include <bits/stdc++.h>
using namespace std;

int main() {

    string str = "hello";

    string newStr;
    cin >> newStr;

    int len = 0;

    for(int i=0; i<newStr.size(); ++i) {
        if(newStr[i] == str[len]) {
            len++;
        }
    }
    if(len == str.size()) {
        cout << "YES";
        return 0;
    }
    cout << "NO";
    
    return 0;
}