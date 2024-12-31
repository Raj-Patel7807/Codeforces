#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    vector<int> ans;

    cin >> n;

    string str[n];

    for(int i=0; i<n; ++i) {
        cin >> str[i];
    }

    for(int i=0; i<n; ++i) {
        int n = str[i].size();
        if(n <= 10) {
            cout << str[i] << endl;
        } else {
            cout << str[i][0] << n-2 << str[i][n-1] << endl;
        }
    }
    
    return 0;
}