#include <iostream>
using namespace std;

int main() {

    string str1, str2;

    cin >> str1 >> str2;

    for(int i=0; i<str1.size(); ++i) {
        if(str1[i] >= 'A' && str1[i] <= 'Z') {str1[i] += 32;}
        if(str2[i] >= 'A' && str2[i] <= 'Z') {str2[i] += 32;}
    }

    if(str1 == str2) {cout << "0" << endl;}
    else if(str1 > str2) {cout << "1" << endl;}
    else {cout << "-1" << endl;}
    
    return 0;
}