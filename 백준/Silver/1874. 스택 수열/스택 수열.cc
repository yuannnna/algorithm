#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
	stack<int> s;
	int n;
	cin >> n;

	vector<int> a(n + 1, 0);
	vector<char> r;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int num = 1;
	for (int i = 1; i <= n; i++) {
		while (num <= a[i]) {
			s.push(num);
			num++;
			r.push_back('+');
		}

		if (s.top() == a[i]) {
			s.pop();
			r.push_back('-');
		}
		else {
			cout << "NO\n";
			return 0;
		}
	}
	for (char result : r) {
		cout << result << '\n';
	}
	return 0;
}