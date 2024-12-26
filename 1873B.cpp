#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    vector<long long> ans(t);

    for(int i=0; i<t; ++i) {
        int a;
        cin >> a;
        vector<int> arr(a);
        long long prod = 1, maxProd = 0;
        int zero = 0;

        for(int j=0; j<a; ++j) {
            cin >> arr[j];
            if(arr[j] == 0) {zero++;}
            else {prod *= arr[j];}
        }
        
        if(zero == 0) {
            maxProd = prod;
            for(int j=0; j<a; ++j) {
                maxProd = max(maxProd, (prod/arr[j])*(arr[j]+1));
            }
        } else if(zero == 1) {
            maxProd = prod;
        }
        
        ans[i] = maxProd;
    }
    for(long long i : ans) {
        cout << i << "\n";
    }
    
    return 0;
}