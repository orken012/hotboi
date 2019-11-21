#include <iostream>            //74
using namespace std;
int main()
{
	int k;
	cin >> k;
	int n = (k - 1) / 20 + 1;
	int ch = ((k - 1) % 20) / 2;
	cout << (k % 2) * n + ((k + 1) % 2) * ch;
	return 0;
}