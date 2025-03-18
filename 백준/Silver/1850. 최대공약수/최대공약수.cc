#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {

	while (b!=0)
	{
		long long x = a % b;
		a = b;
		b = x;
	}
	return a;
}

int main()
{
	long long n, m;
	cin >> n >> m;

	long long result = gcd(n, m);
	for (long long i = 0; i < result; i++) {
		cout << "1";
	}
	return 0;
}