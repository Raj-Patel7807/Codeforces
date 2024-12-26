#include <iostream>
using namespace std;

int main() {

    int limak, bob, years = 0;
    cin >> limak >> bob;

    while(limak <= bob) {
        limak *= 3;
        bob *= 2;
        ++years;
    }

    cout << years << endl;
    
    return 0;
}