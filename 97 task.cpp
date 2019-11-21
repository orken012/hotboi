#include<iostream>
using namespace std;
bool ifHasDThree(int n)
{
	while (n > 0)
	{
		if (n % 10 == 5) return false;
		if (n % 10 == 6) return false;
		n /= 10;
	}
	return true;
}

int main()
{
	cout << "Target numbers:" << "\n";
	for (int i = 1000; i <= 9999; i++)
	{
		if (ifHasDThree(i))
			cout << i << " ";
	}
	cout << "\n";
	system("pause");
	return 0;
}
