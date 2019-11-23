#include <iostream>127
using namespace std;
int main()
{
	int n;
	bool is = true;
	cout << "Input n: ";
	cin >> n;
	for (int i = 2; i < sqrt(n); i++){
		if (n % i == 0)
			is = false;
	}
	(is == false) ? cout << "NO" : cout << "Yes";
	return 0;
}