#include <iostream>
using namespace std;

int main() {
    
    int n;
    int x = 0;

    cin >> n;

    for(int i=0; i<n; ++i) {
        string str;
        cin >> str;

        if(str == "X++") {
            x++;
        } else if(str == "X--") {
            x--;
        } else if(str == "++X") {
            ++x;
        } else {
            --x;
        }
    }

    cout << x << endl;

    return 0;
}