#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int s; int result = 0;
	for (int i = 0; i < n; i++) {
		cin >> s;

		int count = 0;
		for (int j = 1; j <= s; j++) {
			if (s % j == 0) count++;
		}

		if (count == 2) result++;
	}

	cout << result;
	return 0;
}