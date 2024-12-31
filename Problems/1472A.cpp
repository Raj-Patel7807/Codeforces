#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
     cin >> t;

     while(t--) {
        int w, h, n;
        cin >> w >> h >> n;

        int part = 1;

        while(w % 2 == 0 || h % 2 ==0) {
            if(w % 2 == 0) {
                part += part;
                w /= 2;
            } 
            if(h % 2 == 0) {
                part += part;
                h /= 2;
            }
        }
        if(part >= n) {cout << "YES" << "\n";}
        else {cout << "NO" << "\n";}
     }
    
    return 0;
}