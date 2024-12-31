#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	int n, b, d;
	cin >> n >> b >> d;
	
	vector<int> arr(n);
	for(auto& i : arr) cin >> i;
	
	int ans = 0, d1 = 0;
	for(int i=0; i<n; i++) {
		if(arr[i] > b) {
			continue;
		}
		d1 += arr[i];
		if(d1 > d) {
			ans++;
			d1 = 0;
		}
	}
	
	cout << ans << endl;
	
	return 0;
}