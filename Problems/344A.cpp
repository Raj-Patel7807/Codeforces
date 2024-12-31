#include <iostream>
using namespace std;

int main() {

    int n, groups = 0;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; ++i) {
        cin >> arr[i];
    }

    for(int i=1; i<n; ++i) {
        if(arr[i] != arr[i-1]) {++groups;}
    }

    cout << groups+1 << endl;
    
    return 0;
}