#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> ans (n, 0);
    for(int i=0; i<n; ++i) {
        int a;
        cin >> a;

        int num = 0;
        for(int j=1; j<=9; ++j) {
            num = 0;
            for(int k=1; k<=4; ++k) {
                num = num*10 + j;
                ans[i] += k;

                if(num == a) break;
            }
            if(num == a) break;
        }
    }
    for(int i : ans) {cout << i << "\n";}
    
    return 0;
}