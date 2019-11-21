#include <iostream>                      
using namespace std;
int main() {
	int n, x;
	double s = 0;
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		s = s + (1 / cos(pow(x, i)));
	}
	cout << s;
}