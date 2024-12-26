#include <iostream>
using namespace std;

int main() {

    int k, w;
    long long n, dollar = 0;
    cin >> k >> n >> w;

    for(int i=1; i<=w; ++i) {
        dollar += k*i;
    }

    if(n < dollar) {cout << dollar-n << endl;}
    else {cout << "0" << endl;}
    
    return 0;
}