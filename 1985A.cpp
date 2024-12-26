#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<string> s1(n), s2(n);

    for(int i=0; i<n; ++i) {
        string str1, str2;
        cin >> str1 >> str2;

        char temp = str1[0];
        str1[0] = str2[0];
        str2[0] = temp;

        s1[i] = str1;
        s2[i] = str2;
    }
    for(int i=0; i<n; ++i) {
        cout << s1[i] << " " << s2[i] << "\n";
    }
    
    return 0;
}