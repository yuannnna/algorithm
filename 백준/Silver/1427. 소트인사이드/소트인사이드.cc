#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	string s;
	cin >> s;

	int n = s.size();
	vector<int> a(n);

	for (int i = 0; i < n; i++) {
		a[i] = s[i] - '0';
	}
	sort(a.begin(), a.end(), greater<int>());
	for (int i = 0; i < n; i++) {
		cout << a[i];
	}
	return 0;
}