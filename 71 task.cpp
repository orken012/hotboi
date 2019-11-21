#include<iostream>
using namespace std;
int main() {
	int h, m;
	cin >> h >> m;
	double a;
	a = abs((12 * (m - (5 * h)) - m) / 2);
	cout << a;
	return 0;
}