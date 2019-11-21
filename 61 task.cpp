#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n, a, b, c, d;
	cin >> n;
	a = n / 1000;
	b = n / 100 % 10;
	c = n % 100 / 10;
	d = n % 100 % 100;
	if (a == b) {
		cout << a << " " << b;
	}
	if (a == c) {
		cout << a << " " << c;
	}
	if (a == d) {
		cout << a << " " << d;
	}
	if (b == c) {
		cout << b << " " << c;
	}
	if (b == d) {
		cout << b << " " << d;
	}
	if (c == d) {
		cout << c << " " << d;
	}
	return 0;
}
