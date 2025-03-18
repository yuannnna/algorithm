#include <iostream>
using namespace std;

int gcd(int a, int b) {
	
	while (b != 0) {
		int x = a % b;
		a = b;
		b = x;
	}
	return a;
}

int main()
{
	int t;
	cin >> t;

	int a, b;
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		int result = gcd(a, b);
		cout << (a*b)/result << '\n';
	}
	return 0;
}