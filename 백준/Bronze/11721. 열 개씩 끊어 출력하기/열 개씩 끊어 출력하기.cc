#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char a[100];
	cin >> a;

	int count = 0;
	for (int i = 0; i < strlen(a); i++) {
		cout << a[i];
		count++;
		if (count % 10 == 0) cout << '\n';
	}
	return 0;
}