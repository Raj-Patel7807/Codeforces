#include <iostream>
using namespace std;

int main() {
    int n, que = 0;
    cin >> n;

    while(n--) {
        int a, b, c;
        cin >> a >> b >> c;
        if((a && b) || (b && c) || (a && c) || (a && b && c)) {que++;}
    }
    cout << que << endl;
    
    return 0;
}