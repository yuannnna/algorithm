#include <iostream>
using namespace std;

int dp(int a, int b) {
	if (a == 0) {
		return b;
	}
	else if (b == 1) {
		return 1;
	}
	else {
		return (dp(a - 1, b) + dp(a, b - 1));
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int t;
	cin >> t;

	int k, n;
	for (int i = 0; i < t; i++) {
		cin >> k >> n;
		int result = dp(k, n);
		cout << result << '\n';
	}
	return 0;
}