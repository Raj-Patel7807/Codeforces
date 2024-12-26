#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int a) {
    if( a == 0 || a== 1) return false;
    if(a == 2) return true;
    for(int i=2; i*i<=a; ++i) {
        if(a % i == 0) {return false;}
    }
    return true;
}

int main() {

    vector<int> prime;
    for(int i=2; i<=50; ++i) {
        if(isPrime(i)) {
            prime.push_back(i);
        }
    }

    int n, m;
    cin >> n >> m;

    bool flag = false;
    if(isPrime(n) && isPrime(m)) {
        for(int i=0; i<prime.size()-1; ++i) {
            if(prime[i] == n && prime[i+1] == m) {
                flag = true;
                break;
            }
        }
    }
    if(flag) {cout << "YES";}
    else {cout << "NO";}
    
    return 0;
}