#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<string> ans(n, "NO");
    for(int i=0; i<n; ++i) {
        int a;
        cin >> a;

        vector<int> vec(a);
        for(int j=0; j<a; ++j) {
            cin >> vec[j];
        }
        
        sort(vec.begin(), vec.end());
        int count = 0;
        for(int j=1; j<a; ++j) {
            if(vec[j] - vec[j-1] <= 1) {
                count++;
            }
        }
        if(count >= a-1) {ans[i] = "YES";}
    }
    for(string i : ans) {
        cout << i << "\n";
    }
    
    return 0;
}