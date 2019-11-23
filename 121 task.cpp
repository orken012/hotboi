#include <iostream>122
using namespace std;
int main() {
	int n;
	cin >> n;int d = 0;
	int i1, i2, i3, i4;	
	i4 = n% 10;
	i3 = n% 100 / 10;
	i2 = n% 1000 / 100;
	i1 = n % 10000 / 1000;
	if (i1 > 3 && i1<8&&i2>3&&i2<8&&i3>3&&i3<8&&i4>3&&i4<8) {
			d++;
	}
	cout << d;
	return 0;
}