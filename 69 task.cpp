#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	if ((a + b) > c && (a + c) > b && (c + b) > a) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	return 0;
}