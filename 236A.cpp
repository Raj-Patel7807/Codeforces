#include <iostream>
#include <set>
using namespace std;

int main() {

    string str;
    cin >> str;
    
    set<char> uniqueChar;

    for(int i=0; i<str.size(); ++i) {
        uniqueChar.insert(str[i]);
    }

    if(uniqueChar.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
    
    return 0;
}