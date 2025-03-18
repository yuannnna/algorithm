#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
	
	while (b != 0) {
		int x = a % b;
		a = b;
		b = x;
	}
	return a;
}

int main()
{

	long long a, b;
	cin >> a >> b;

	long long result = gcd(a, b);
	cout << (a * b) / result;
	return 0;
}