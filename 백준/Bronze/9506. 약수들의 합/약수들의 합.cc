#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	while (1) {
		cin >> n;
		if (n == -1) break;

		int count = 0;
		vector<int> a;
		for (int i = 1; i < n; i++) {
			
			if (n % i == 0) {
				a.push_back(i);
				count += i;
			}
		}
		if (n == count) {
			cout << n << " = ";
			for (int i = 0; i < a.size(); i++) {
				cout << a[i];
				if (i != a.size() - 1) cout << " + ";
			}
		}
		else
			cout << n << " is NOT perfect.";
		cout << '\n';
	}
	return 0;
}