#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main() {
	double a;
	cin >> a;
	if (a > 100 || a < -100) {
		a = 0;
	}
	else {
		a++;
	}
	cout << a;
}
