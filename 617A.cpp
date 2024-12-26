#include <iostream>
using namespace std;

int main() {
    
    int dist, steps = 0;
    cin >> dist;

    while(dist) {
        if(dist >= 5) {dist -= 5;}
        else {dist -= dist;}
        ++steps;
    }

    cout << steps << endl;

    return 0;
}