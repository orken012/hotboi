#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int x = 0;
	if (a > 0) {
		x++;
	}
	if (b > 0) {
		x++;
	}
	if (c > 0) {
		x++;
	}
	cout << x << endl;
	return 0;
}