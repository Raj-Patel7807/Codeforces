#include <iostream>
using namespace std;

int main() {

    int year;
    cin >> year;

    while(1) {
        bool flag = true;
        ++year;
        int newyear = year, year1 = year;
        int newYear[4];
        for(int i=0; i<4; ++i) {
            int digit = year1 % 10;
            newYear[i] = digit;
            year1 /= 10;
        }
        for(int i=0; i<4; ++i) {
            for(int j=i+1; j<4; ++j) {
                if(newYear[i] == newYear[j]) {flag = false;}
            }
        }
        if(flag) {cout << newyear << endl; break;}
     }
    
    return 0;
}