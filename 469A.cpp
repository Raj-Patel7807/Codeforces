#include <iostream>
#include <set>
using namespace std;

int main() {

    int n;
    cin >> n;

    set<int> s;

    int p;
    cin >> p;
    for(int i=0; i<p; ++i) {
        int p;
        cin >> p;
        s.insert(p);
    }
    int q;
    cin >> q;
    for(int i=0; i<q; ++i) {
        int q;
        cin >> q;
        s.insert(q);
    }
    
    if(s.size() == n) {
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
    }
    
    return 0;
}