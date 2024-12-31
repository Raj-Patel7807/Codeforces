#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> vec(n);
    for(int i=0; i<n; ++i) {cin >> vec[i];}

    int police = 0, crime = 0;
    for(int i=0; i<n; ++i) {
        if(vec[i] == -1) {
            if(police > 0) {
                police--;
            } else {
                crime++;
            }
        } else {
            police += vec[i];
        }
    }
    cout << crime << "\n";
    
    return 0;
}