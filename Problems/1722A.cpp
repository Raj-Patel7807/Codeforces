#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    string str = "Timur";
    int n;
    cin >> n;

    bool ans[n] = {false};
    for(int i=0; i<n; ++i) {
        int s;
        string str1;
        cin >> s >> str1;

        sort(str.begin(), str.end());
        sort(str1.begin(), str1.end());

        if(str == str1) {ans[i] = true;}
    }

    for(int i=0; i<n; ++i) {
        if(ans[i]) {cout << "YES" << "\n";}
        else {cout << "NO" << "\n";}
    }
    
    return 0;
}