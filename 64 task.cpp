#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	cin >> a;
	bool t = false;
	for (int i = 0; i<a.length(); i++) {
		if (a[i] == a[a.length()-i-1]) {
			t = true;
		}	
	}
	if (t == true) {
		cout << "Yes";
	}
	else {
			cout << "No";
		}
	
	return 0;
}