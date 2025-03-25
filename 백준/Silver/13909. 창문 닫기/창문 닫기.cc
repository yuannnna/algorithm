#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n;
	cin >> n;

	int count = 0;
	for (int i = 1; i * i <= n; i++) {
		count++;
	}
	cout << count;
	return 0;
}