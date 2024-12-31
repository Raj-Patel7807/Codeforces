#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    int taxi = 0;
    cin >> n;

    vector<int> vec(n);
    vector<int> stud(5, 0);

    for(int i=0; i<n; ++i) {
        cin >> vec[i];
        stud[vec[i]]++;
    }

    taxi += stud[4];

    taxi += stud[3];

    stud[1] = max(0, stud[1]-stud[3]);

    taxi += stud[2]/2;

    if(stud[2] % 2 != 0) {
        taxi++;

        stud[1] = max(0, stud[1]-2);
    }

    taxi += (stud[1]+3)/4;

    cout << taxi << "\n";
    
    return 0;
}