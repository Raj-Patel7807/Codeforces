#include <iostream>
using namespace std;

int main() {
    
    string str1, str2;

    cin >> str1 >> str2;
    int n = str1.size();

    for(int i=0; i<n; ++i) {
        if(str1[i] == str2[i]) {cout << "0";}
        else {cout << "1";}
    }
    
    return 0;
}