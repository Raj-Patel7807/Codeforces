#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i=1; i<=n; ++i) {
        if(i != n && i % 2 != 0) {
            cout << "I hate ";
        } else if(i != n && i % 2 == 0) {
            cout << "that I love that ";
        }
        if(i == n && i % 2 != 0) {
            cout << "I hate it";
        } else if(i == n && i % 2 == 0) {
            cout << "that I love it";
        }
    }
    
    return 0;
}