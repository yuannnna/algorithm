#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector<string> s(n), t(m);
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> t[i];
	}
	sort(s.begin(), s.end());
	int count = 0;
	for (int i = 0; i < m; i++) {
		if (binary_search(s.begin(), s.end(), t[i])) {
			count ++;
		}
	}
	cout << count;
	return 0;
}