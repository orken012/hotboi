#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double a = 0;
	for (int i = 2; i <= 9; i++) {
		a = a + (i * 1.0 / ((i * 1.0) + 1));
	}
	cout << a << endl;
}