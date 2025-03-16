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
	int a, b;
	cin >> a >> b;

	int max = gcd(a, b);
	cout << max << '\n' << (a * b) / max;
	return 0;
}