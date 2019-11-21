#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n, a, b, c, d;
	cin >> n;
	d = n % 10;
	c = n / 10 % 10;
	b = n / 10 / 10 % 10;
	a = n / 10 / 10 / 10 % 10;
	if (a > b > c > d) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}