#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double a = 0;
	int x;
	cin >> x;
	for (int i = 1; i <= x; i++) {
		a = a + pow(i, 2);
	}
	cout << a << endl;
}