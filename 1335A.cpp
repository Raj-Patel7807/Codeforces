#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<long long> vec(n), ans(n, 0); 
    for(int i=0; i<n; ++i) {
        cin >> vec[i];
    }
    for(int i=0; i<n; ++i) {
        if(vec[i]/2 == (vec[i]- vec[i]/2)) {
            ans[i] = vec[i]/2 - 1;
        } else {
            ans[i] = vec[i]/2;
        }
    }
    for(int i : ans) {
        cout << i << endl;
    }
    
    return 0;
}