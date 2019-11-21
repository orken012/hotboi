#include <iostream>
using namespace std;
int main() {
	double sum = 0;
	for (double i = 3, j = 5; i <= 111; i += 3, j = i + 2) {
		sum += (double)(cos(i / j));
	}
	cout << sum;
}
