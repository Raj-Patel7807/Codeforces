#include <iostream>
using namespace std;

int main() {

    long long n;
    cin >> n;

    long long sum;

    if(n % 2 == 0) {
        sum = n/2;
    } else {
        sum = -((n/2)+1);
    }

    cout << sum << endl;
    
    return 0;
}