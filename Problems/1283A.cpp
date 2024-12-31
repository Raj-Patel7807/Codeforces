#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> ans(n);
    for(int i=0; i<n; ++i) {
        int h, m;
        cin >> h >> m;
        
        int hour = 23 - h;
        int minut = 60 - m;
        ans[i] = hour*60 + minut;
    }

    for(int i=0; i<n; ++i) {
        cout << ans[i] << "\n";
    }
    
    return 0;
}