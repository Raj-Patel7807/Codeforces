#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	int t;
	cin >> t;
	
	while(t--) {
		int n;
		cin >> n;
		
		cout << 1;
		n--;
		while(n--) {
			cout << 0;
		}
		cout << '\n';
	}
	
	return 0;
}