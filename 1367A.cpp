#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<string> ans(n);

    for(int i=0; i<n; ++i) {
        string str;
        cin >> str;
        int s = str.size();

        if(s <= 3) {ans[i] = str;}
        else {
            for(int j=0; j<s; j+=2) {
                ans[i].push_back(str[j]);
            }
            ans[i].push_back(str[s-1]);
        }
    }
    for(string i : ans) {cout << i << "\n";}
    
    return 0;
}