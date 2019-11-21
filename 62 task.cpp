#include<iostream>
#include<string>
using namespace std;
int main() {
	string n;
	cin >> n;
	for (int i = 0;i < n.length();i++) {
		if (i % 2 != 0) {
			cout << '0';
		}
		else {
			cout << n[i];
		}
	}
	return 0;
}