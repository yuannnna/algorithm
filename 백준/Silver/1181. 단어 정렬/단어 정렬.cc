#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool word(string& x, string& y) {
	if (x.length() == y.length()) return x < y;
	return x.length() < y.length();
}
int main()
{
	int n;
	cin >> n;

	string b;
	vector<string> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end(), word);
	for (int i = 0; i < n; i++) {
		if (b == a[i]) continue;
		cout << a[i] << '\n';
		b = a[i];
	}
	return 0;
}