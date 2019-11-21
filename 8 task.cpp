#include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
#include<string>
using namespace std;
int main() {
	int a = 2;
	int b = 3;
	int c = (a + 4 * b) * (a - 3 * b) + (pow(a, 2));
	cout << c;
	return 0;
}
