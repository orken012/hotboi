#include <iostream>126
using namespace std;
int main()
{
	int n, i;
	cout << "input N" << endl;
	cin >> n;
	for (i = n; i > 0; i--) {
		if (n % i == 0) {
			cout << "divider: " << i << endl;
		}
	}
	system("pause");
	return 0;
}