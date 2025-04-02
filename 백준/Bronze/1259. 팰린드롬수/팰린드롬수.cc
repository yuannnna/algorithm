#include <iostream>
#include <vector>
using namespace std;

int main()
{
	while (1) {
		int n;
		cin >> n;
		if (n == 0) break;

		vector<int> a;
		while (n > 0) {
			a.push_back(n % 10);
			n /= 10;
		}
		bool result = true;
		for (int i = 0; i < a.size() / 2; i++) {
			if (a[i] != a[a.size() - 1 - i]) {
				result = false;
				break;
			}
		}
		if (result == true)  cout << "yes" << '\n';
		else cout << "no" << '\n';
	}
		
	return 0;
}