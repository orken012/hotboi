#include<iostream>
using namespace std;
int main() {
	int d, m, y;
	cin >> d >> m >> y;
	if (m > 12) {
		cout << "NO";
	}
	else {
		cout << "YES";
	}
	return 0;
}