#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	int t;
	cin >> t;
	
	while(t--) {
		int n;
		cin >> n;
		
		int value = 1;
		vector<int> ans;
		
		while(n > 0) {
			int digit = n % 10;
			if(digit == 0) {
				n /= 10;
				value *= 10;
				continue;
			}
			ans.push_back(value*digit);
			n /= 10;
			value *= 10;
		}
		cout << ans.size() << "\n";
		for(int i=ans.size()-1; i>=0; --i) {
		    cout << ans[i] << " ";
	    }
	}
	
	return 0;
}