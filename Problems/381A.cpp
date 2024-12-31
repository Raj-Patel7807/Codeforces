#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    int sereja = 0, dima = 0;
    cin >> n;
    vector<int> vec(n);
    for(int i=0; i<n; ++i) {
        cin >> vec[i];
    }

    int st = 0, end = n-1;
    int player = 0;

    while(st <= end) {
        if(vec[st] > vec[end]) {
            if(player == 0) {sereja += vec[st];}
            else {dima += vec[st];}
            st++;
        } else {
            if(player == 0) {sereja += vec[end];}
            else {dima += vec[end];}
            end--;
        }
        player = 1 - player;
    }
    cout << sereja << " " << dima;
    
    return 0;
}