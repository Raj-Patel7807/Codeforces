#include <iostream>
using namespace std;

int main() {

    int n, k;
    cin >> n >> k;

    int min = 240 - k;
    int que = 1;
    while(min >= que*5 && que <= n) {
        min -= que*5;
        que++;
    }

    cout << que-1 << "\n";
    
    return 0;
}