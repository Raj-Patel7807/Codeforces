#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n, steps = 0;
    cin >> n;

    vector<int> arr(n);
    for(int i=0; i<n; ++i) {
        cin >> arr[i];
    }

    int maxIdx = 0, minIdx = 0;
    
    for(int i=0; i<n; ++i) {
        if(arr[i] > arr[maxIdx]) {maxIdx = i;}
        if(arr[i] <= arr[minIdx]) {minIdx = i;}
    }

    steps = maxIdx + n - minIdx - 1;

    if(maxIdx > minIdx) {--steps;} 

    cout << steps << endl;
    
    return 0;
}