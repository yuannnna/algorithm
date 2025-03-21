#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n, k;
	cin >> n >> k;

	vector<int> a(n);
	int count = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int result = 0;
	for (int i = n - 1; i >= 0; i--) {
		
		if (a[i] > k) continue;
		count = k / a[i];
		k -= count * a[i];
		result += count;
		if (k == 0) break;
	}
	cout << result;
	return 0;
}
