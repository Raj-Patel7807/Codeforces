#include <iostream>
using namespace std;

int main() {

    int n, h, width = 0;
    cin >> n >> h;

    int height[n];
    for(int i=0; i<n; ++i) {
        cin >> height[i];
        if(height[i] <= h) {++width;}
        else {width += 2;}
    }

    cout << width << endl;
    
    return 0;
}