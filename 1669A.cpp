#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> rate(n);
    for(int i=0; i<n; ++i) {
        cin >> rate[i];
    }

    for(int i : rate) {
        if(i >= 1900) {cout << "Division 1" << "\n";}
        else if(i >= 1600) {cout << "Division 2" << "\n";}
        else if(i >= 1400) {cout << "Division 3" << "\n";}
        else {cout << "Division 4" << "\n";}
    }
    
    return 0;
}