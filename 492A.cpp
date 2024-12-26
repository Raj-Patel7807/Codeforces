#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    if(n <= 3) {cout << "1"; return 0;}

    int cube = 1;
    int i = 2;
    int height = 0;
    while(n >= cube) {
        n -= cube;
        cube += i;
        i++;
        height++;
    }
    cout << height ;

    return 0;
}