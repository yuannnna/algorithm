#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<string> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (a[i][0] == 'C' || a[i][0] == 'c') count++;
	}
	cout << count;
	return 0;
}