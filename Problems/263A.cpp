#include <iostream>
using namespace std;

int main() {

    int arr[5][5];
    int p, q, moves = 0;

    for(int i=0; i<5; ++i) {
        for(int j=0; j<5; ++j) {
            cin >> arr[i][j];
            if(arr[i][j] == 1) {p=i; q=j;}
        }
    }

    while(p != 2 || q != 2) {
        if(p > 2) {--p;}
        else if(p < 2) {++p;}
        else if(q > 2) {--q;}
        else if(q < 2) {++q;}
        ++moves;
    }

    cout << moves << endl;
    
    return 0;
}