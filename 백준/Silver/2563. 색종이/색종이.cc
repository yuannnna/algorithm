#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n;
	cin >> n;
	int a[100][100] = { 0 };

	int x, y;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		
		for (int j = x; j < x + 10; j++) {
			for (int k = y; k < y + 10; k++) {
				a[j][k] = 1;
			}
		}
	}

	int count = 0;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (a[i][j] == 1) count++;
		}
	}
	cout << count;
	return 0;
}