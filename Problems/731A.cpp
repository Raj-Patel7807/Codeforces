#include <bits/stdc++.h>
using namespace std;

int main() {

    string str;
    cin >> str;

    int rot = min(abs(str[0]-'a'), 26-abs(str[0]-'a'));
    for(int i=1; i<str.size(); ++i) {
        rot += min(abs(str[i]-str[i-1]), 26-abs(str[i]-str[i-1]));
    }
    cout << rot << "\n";
    
    return 0;
}