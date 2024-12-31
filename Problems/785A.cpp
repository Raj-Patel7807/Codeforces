#include <iostream>
using namespace std;

int main() {

    int n, faces = 0; 
    cin >> n;

    for(int i=0; i<n; ++i) {
        string str;
        cin >> str;

        if(str[0] == 'T') {faces += 4;}
        else if(str[0] == 'C') {faces += 6;}
        else if(str[0] == 'O') {faces += 8;}
        else if(str[0] == 'D') {faces += 12;}
        else {faces += 20;}
    }
    cout << faces << endl;
    
    return 0;
}