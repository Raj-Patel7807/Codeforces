#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    string str[n];
    for(int i=0; i<n; ++i) {
        cin >> str[i];
        for(int j=0; j<3; ++j) {
            if(str[i][j] >= 'a' && str[i][j] <= 'z') {
                str[i][j] -= 32;
            }
        }
    }
    for(int i=0; i<n; ++i) {
        if(str[i] == "YES") {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    
    return 0;
}