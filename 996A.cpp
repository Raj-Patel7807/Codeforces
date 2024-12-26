#include <iostream>
using namespace std;

int main() {

    long long n, bills = 0;
    cin >> n;

    while(n > 0) {
        if(n >= 100) {
            n -= 100;
            bills++;
        } else if(n >= 20) {
            n -= 20;
            bills++;
        } else if(n >= 10) {
            n -= 10;
            bills++;
        } else if(n >= 5) {
            n -= 5;
            bills++;
        } else {
            n -= 1;
            bills++;
        }
    }
    cout << bills << endl;
    
    return 0;
}