#include <iostream>
using namespace std;
int main() {
	double sum = 1;
	double a, n;
	cin >> a >> n;
	for (int i = 1; i <= n; i++) {
		sum *= pow((a + i), 2);
	}
	cout << sum;
}
