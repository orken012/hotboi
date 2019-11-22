#include <bits/stdc++.h> 
using namespace std;
 int main() {
	     double a, b, h;
	     cin >> a >> b >> h;
	     for (double x = a; x <= b; x += h) {
		         cout << fixed << setprecision(3) << x << " " << x * x - sin(x) << endl;
		
	}
	   return 0;
	
}
