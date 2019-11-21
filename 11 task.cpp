#include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
#include<string>
using namespace std;
int main() {
	double x = -2.34;
	double c = ((abs(x - 5) - sin(x)) / 3) + sqrt((pow(x, 2)) + 2014) * cos(2 * x) - 3;
	cout << c;
	return 0;
}
