#include <iostream>
using namespace std;

int main() {

    int n, count[2] = {0}; 
    string str;

    cin >> n >> str;

    for(int i=0; i<n; ++i) {
        if(str[i] == 'A') {++count[0];}
        else {++count[1];}
    }

    if(count[0] > count[1]) {cout << "Anton" << endl;}
    else if(count[0] < count[1]) {cout << "Danik" << endl;}
    else {cout << "Friendship" << endl;}
    
    return 0;
}