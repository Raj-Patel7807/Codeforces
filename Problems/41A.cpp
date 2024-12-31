#include <iostream>
using namespace std;

int main() {

    string str1, str2;
    cin >> str1 >> str2;
    int n = str1.size();

    for(int i=0; i<n/2; ++i) {
        char temp = str1[i];
        str1[i] = str1[n-i-1];
        str1[n-i-1] = temp;
    }

    if(str1 == str2) {cout << "YES" << endl;}
    else {cout << "NO" << endl;}
    
    return 0;
}