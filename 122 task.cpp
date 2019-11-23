#include <iostream>122
using namespace std;
int main() {
	int n;
	cin >> n; int k = 0;
	int a, b, c, d;
	a = n % 10;
	b = n / 10 % 10;
	c = n / 10 / 10 % 10;
	d = n / 10 / 10 / 10 % 10;

	if (a > 3 && a < 8) {
		k++;
	}
	if (b > 3 && b < 8) {
		k++;
	}
	if (c > 3 && c < 8) {
		k++;
	}
	if (d > 3 && d < 8) {
		k++;
	}
	cout << k;
	return 0;
}
