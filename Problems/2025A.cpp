#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin >> t;
	
	while(t--) {
		string s1, s2;
		cin >> s1 >> s2;
		
		int n = min(s1.size(), s2.size());
		int m = 0;
		for(int i=0; i<n; i++) {
			if(s1[i] != s2[i]) {
				break;
			}
			m++;
		}
		int a = max(s1.size(), s2.size());
		int ans = a - m + n + 1;
		if(m == 0) {
			ans--;
		}
		cout << ans << '\n';
	}
	
	return 0;
}