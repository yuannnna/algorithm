#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int a, b, c;

	while (1) {
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) break;

		int s[] = { a,b,c };
		sort(s, s + 3);

		if (s[0]+s[1] > s[2]) {

			if (s[0] == s[1] && s[1] == s[2] && s[2] == s[0]) cout << "Equilateral" << '\n';
			else if (s[0] == s[1] || s[1] == s[2] || s[2] == s[0]) cout << "Isosceles " << '\n';
			else cout << "Scalene" << '\n';
		}
		else cout << "Invalid" << '\n';
	}
	return 0;
}