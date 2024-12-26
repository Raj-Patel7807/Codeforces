#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n; 
    cin >> n;

    vector<string> ans(n, "YES");

    for(int i=0; i<n; ++i) {
        int s;
        string str;
        cin >> s >> str;

        for(int j=0; j<s; ++j) {
            for(int k=j+1; k<s; ++k) {
                if(j!=k && (str[k] != str[k-1] && str[j] == str[k])) {
                    ans[i] = "NO";
                }
            }
        }
    }
    for(string s : ans) {
        cout << s << "\n";
    }
    
    return 0;
}