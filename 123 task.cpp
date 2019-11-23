#include <iostream>123
using namespace std;
int main() {
	int n;
	cin >> n;
	int n1, n2, n3, n4;
	n4 = n % 10;
	n3 = n % 100 / 10;
	n2 = n % 1000 / 100;
	n1 = n % 10000 / 1000;
	int i, i1, i2, i3, i4;
	for (i = 0; i <= 9999; i++) {
		i4 = i % 10;
		i3 = i % 100 / 10;
		i2 = i % 1000 / 100;
		i1 = i % 10000 / 1000;
		if (n1 == i4 && n2 == i3 && n3 == i2 && n3 == i2 && n4 == i1) {
			cout << i << " ";
		}
	}
	return 0;
}
