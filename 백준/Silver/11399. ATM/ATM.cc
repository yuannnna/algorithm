#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<int> p(n);
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}
	sort(p.begin(), p.end());
	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i + 1; j++) {
			sum += p[j];
		}
	}
	cout << sum;
	return 0;
}