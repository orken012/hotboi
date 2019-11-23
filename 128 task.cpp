#include <iostream>128
using namespace std;
int sum_del(int n)
{
	int sum = 0;
	for (int i = 1; i <= n / 2; i++)
		if (n % i == 0)
			sum += i;
	return sum;
}
int main()
{
	setlocale(LC_ALL, "rus");
	int n, i, j;
	cout << "Input n: ";
	cin >> n;
	for (i = 1; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (i == sum_del(j) && j == sum_del(i))
				cout << i << "\t" << j << endl;
	system("pause");
	return 0;
}