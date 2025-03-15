#include <iostream>
#include <algorithm>
#include <utility> 
#include <vector>
using namespace std;

bool second(const pair<int, int>& x, const pair<int, int>& y) {
	if (x.second == y.second) return x.first < y.first;
	else return x.second < y.second;
}
int main()
{
	int n;
	cin >> n;

	vector<pair<int, int>> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i].first >> a[i].second;
	}
	sort(a.begin(), a.end(), second);
	for (int i = 0; i < n; i++) {
		cout << a[i].first << " " << a[i].second << "\n";
	}
	return 0;
}