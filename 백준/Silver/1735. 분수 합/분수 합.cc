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
	int a1, b1, a2, b2;
	cin >> a1 >> b1 >> a2 >> b2;

	int under = b1 * b2;
	int top = (a1 * b2) + (a2 * b1);

	int com = gcd(under, top);
	cout << top/ com << " " << under / com;
	return 0;
}