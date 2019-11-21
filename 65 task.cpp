#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	cin >> a;
	for (int i =0; i< (a.length()-1); i++) {
		for (int j = i + 1; j < a.length(); j++) {
			if (a[i] >= 53 ) {
			swap(a[i], a[j]);
			}
		}
	}
	cout << a;
	return 0;
}