#include <iostream>
using namespace std;

int main() {

    int n, k, count = 0;
    cin >> n >> k;

    int arr[n];

    for(int i=0; i<n; ++i) {
        cin >> arr[i];
    }
    for(int i=0; i<n; ++i) {
        if(arr[i] >= arr[k-1] && arr[k-1] != 0) {++count;}
        else if(arr[i] > arr[k-1] && arr[k-1] == 0) {++count;}
    }

    cout << count << endl;
    
    return 0;
}