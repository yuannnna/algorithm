#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
		
	int n, m;
	cin >> n >> m;

	vector<int> a(n + 1), b(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		b[i] = b[i - 1] + a[i];
	}

	int x, y;
	for (int i = 0; i < m; i++) {
		cin >> x >> y;

		int sum = b[y] - b[x - 1];
		cout << sum << '\n';
	}
	return 0;
}
