#include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
#include<string>  
 using namespace std;
 double x = 10, y, n, str, z;
int main() {
	 cin >> n;
	 for (int i = 1; i <= 10; ++i) { cout << x << " "; if (i < 8) { y += x; }; x = x + (x * 0.1); }cout << endl;
	 cout << y;
	 for (int i = 0; i < n; ++i) { x = x + (x * 0.1); str += x; }cout << endl;
	 cout << str;
	 for (int i = 0; i < 1000; ++i) {
		if (x > 80) { break; }
		 x = x + (x * 0.1); z = i;
	}cout << endl;
	cout << z;
}
