#include <iostream>
#include <vector>
using namespace std;

int main() {

    string str;
    cin >> str;
    int n = str.size();
    vector<char> ans;
    for(int i=0; i<n; ++i) {
        if(str[i] == '.') {
            ans.push_back('0');
        }
        else if(i != n-1 && str[i] == '-' && str[i+1] == '.') {
            ans.push_back('1');
            i++;
        }
        else if(i != n-1 && str[i] == '-' && str[i+1] == '-') {
            ans.push_back('2');
            i++;
        }
    }

    for(char i : ans) {
        cout << i;
    }
    
    return 0;
}