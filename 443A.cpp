#include <iostream>
#include <set>
using namespace std;

int main() {

    set<char> str;
    char c = ' ';
    while(c != '}') {
        cin >> c;
        if(c >= 'a' && c <= 'z') {
            str.insert(c);
        }
    }

    cout << str.size() << endl;
    
    return 0;
}