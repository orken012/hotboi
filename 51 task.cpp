#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b == c) {
		cout << a << " " << b;
	}
	if (a + c == b) {
		cout << a << " " << c;
	}
	if (b + c == a) {
		cout << b << " " << c;
	}
	return 0;
}