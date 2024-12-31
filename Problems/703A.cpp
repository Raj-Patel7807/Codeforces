#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int m[n], c[n];
    int mis = 0, chr = 0;

    for(int i=0; i<n; ++i) {
        cin >> m[i] >> c[i];

        if(m[i] > c[i]) {++mis;}
        else if(m[i] < c[i]) {++chr;}
    }

    if(mis > chr) {cout << "Mishka";}
    else if(chr > mis) {cout << "Chris";}
    else {cout << "Friendship is magic!^^";}
    
    return 0;
}