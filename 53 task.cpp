#include<iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	if (a > 30 || b > 30) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}