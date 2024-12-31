#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    vector<int> ans(t);

    for(int i=0; i<t; ++i) {
        int n;
        string str;
        cin >> n >> str;   
        
        int j=0, k=n-1;
        while(str[j] != 'B' || str[k] != 'B') {
            if(str[j] != 'B') {++j;}
            if(str[k] != 'B') {--k;}   
        }
        ans[i] = k-j+1;
    }
    for(int i : ans) {
        cout << i << "\n";
    }
    
    return 0;
}