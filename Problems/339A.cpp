#include <iostream>
using namespace std;

int main() {

    string str;
    cin >> str;
    int n = str.size();

    if(n == 1) {
        cout << str << endl;
        return 0;
    }

    for(int i=0; i<n; i+=2) {
        for(int j=i+2; j<n; j+=2) {
            if(str[i] > str[j]) {
                swap(str[i], str[j]);
            }
        }
    }

    cout << str << endl;
    
    return 0;
}