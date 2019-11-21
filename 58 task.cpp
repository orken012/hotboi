#include<iostream>
using namespace std;
int main() {
	int d1, d2, m, y;
	cin >> d1 >> d2 >> m >> y;
	if (d1 < d2) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}