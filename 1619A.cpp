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
        int s = str.size();

        if(s % 2 != 0) {continue;}

        vector<char> str1(s/2), str2(s/2);
        for(int j=0; j<s; ++j) {
            if(j < s/2) {
                str1[j] = str[j];
            } else {
                str2[j-s/2] = str[j];
            }
        }
        if(str1 == str2) {ans[i] = "YES";}
    }
    for(string s : ans) {
        cout << s << "\n";
    }
    
    return 0;
}