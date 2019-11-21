#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	double x1,x2;
	double d = pow(b, 2) - (4 * a * c);
	if (d == 0) {
		x1 = (-(b) + sqrt(d)) / (2 * a);
		x2 = x1;
	}else if (d > 0) {
		x1 = (-(b) + sqrt(d)) / (2 * a);
		x2 = (-(b) - sqrt(d)) / (2 * a);
	}else{
		cout << "Answer does not exist";
	}
    cout << x1<<" "<<x2;
	return 0;
}