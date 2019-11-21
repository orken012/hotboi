#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n, a, b, c, n1;
	cin >> n;
	c = n % 10;
	a = n / 100;
	b = n / 10 % 10;
	n1 = c * 100 + b * 10 + a;
	cout << n1 << endl;
	return 0;
}