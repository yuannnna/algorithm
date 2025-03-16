#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
using namespace std;

bool compare(const pair<int, string>& x, const pair<int, string>& y) {
	return x.first < y.first;
}
int main()
{
	int n;
	cin >> n;

	vector<pair<int, string>> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i].first >> a[i].second;
	}
	stable_sort(a.begin(), a.end(), compare);
	for (int i = 0; i < n; i++) {
		cout << a[i].first << " " << a[i].second << '\n';
	}
	return 0;
}