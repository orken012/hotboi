#1
#include <iostream>
using namespace std;
int main() {
	cout << "Silence is golden";
}
#2
#include <iostream>
using namespace std;
int main() {
	cout << "Monday" << endl << "November" << endl << "My name is Orken";
}
#3
#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j <= i; j++) {
			cout << '0';
		}
		cout << endl;
	}	return 0;
}
#4
#include <iostream>
using namespace std;
int main() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= 8; j++) {
			cout << 'A';
		}
		cout << endl;
	}	return 0;
}
#5
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main() {
	cout << "*    *     *" << endl;
	cout << " *  * *   * " << endl;
	cout << "  *     *   " << endl;
}
#6
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main() {
	cout << 1 + 2 - 4;
}
#7
#include <iostream>
using namespace std;
int main() {
	cout << 1.0 / 2 + 1.0 / 4;
}
#8
#include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
#include<string>
using namespace std;
int main() {
	int a = 2;
	int b = 3;
	int c = (a + 4 * b) * (a - 3 * b) + (pow(a, 2));
	cout << c;
	return 0;
}
#9
* #include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
#include<string>
using namespace std;
int main() {
	int x = -2;
	int c;
	c = abs(x) + (pow(x, 5));
	cout << c;
}
*
#10
* #include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
#include<string>
using namespace std;
int main() {
	double x = 1.7;
	int c = 3;
	double d = pow((x + 1), 2) + 3 * (x + 1);
	int e = pow((c + 1), 2) + 3 * (c + 1);
	cout << "a)" << d << endl << "b)" << e;
}
#11
#include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
#include<string>
using namespace std;
int main() {
	double x = -2.34;
	double c = ((abs(x - 5) - sin(x)) / 3) + sqrt((pow(x, 2)) + 2014) * cos(2 * x) - 3;
	cout << c;
	return 0;
}
#12

#include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
#include<string>
using namespace std;
int main() {
	double x = 3.6;
	double d = exp(x - 2) + abs(sin(x)) - pow(x, 4) * cos(1 / x);
	cout << d;
	return 0;
}
#13

#include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
#include<string>
using namespace std;
int main() {
	double a = 0.1;
	double b = 0.2;
	double x = 1;
	double s = pow((pow(x, 2) + b), 1.0 / 5) - ((pow(b, 2) * pow(sin(x + a), 3)) / x);
	cout << s;
	return 0;
}
#14
#include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
#include<string>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int d = a + b;
	int e = a * b;
	cout << "sum=" << d << endl << "Proizv=" << e;
}
#15
#include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
#include<string>
using namespace std;
int main() {
	int a;
	cin >> a;
	int b = pow(a, 2);
	int c = pow(a, 3);
	cout << b << endl << c;
	return 0;
}
#16
#include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
#include<string>
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	double d = a * 2;
	double v = b / 3;
	double e = pow(c, 2);
	double m = d + v + e;
	cout << m;
	return 0;
}
#17
#include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
#include<string>
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	double d = (a + b + c) / 3;
	double s = (a * 2) - (b * 2) - (c * 3);
	cout << "Arifmetic=" << d << endl << "Raznost=" << s;
	return 0;
}
#18
#include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
#include<string>
using namespace std;
int main() {
	int a;
	cin >> a;
	int b = a * 4;
	int c = pow(a, 2);
	cout << "Perimetr=" << b << endl << "Area=" << c;
	return 0;
}
#19
#include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
#include<string>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int b = a * 4;
	int c = pow(a, 2);
	cout << "Perimetr=" << b << endl << "Area=" << c;
	return 0;
}
#20
#include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
#include<string>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	cout << "a)" << 0.3 * a << " " << 0.4 * b << endl;
	cout << "b)" << 3 * (1.8 * a) << " " << 3 * 2 * b;
	return 0;
}
#21
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double a, b, c, s, p;
	cin >> a >> b;
	c = sqrt(pow(a, 2) + pow(b, 2));
	s = (a * b) / 2;
	p = c + a + b;
	cout << c, s, p;
}
#22
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double a, b;
	cin >> a;
	b = (a * 1.8) + 32;
	cout << b;
}
#23
#include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
#include<string>
using namespace std;
int main() {
	double x, a, y, k, y2, k2;
	cin >> x >> a >> y >> k;
	y2 = (y * a) / x;
	k2 = (k * x) / a;
	cout << y2 << " " << k2;
}
#24
#include <iostream>
using namespace std;
int main() {
	int days, sale;
	float sum = 0.0f;
	cin >> days >> sale >> sum;
	sale /= 100;
	for (int i = 0; i < days; i++)
	{
		sum += 3;
		sum += sum * sale;
	}
	cout << sum << endl;
}
#25
#include <iostream>
using namespace std;
int main() {
	int days, sale;
	float sum = 0.0f;
	cin >> days >> sale >> sum;
	sale /= 100;
	for (int i = 0; i < days; i++)
	{
		sum += 3;
		sum += sum * sale;
	}
	cout << sum << endl;
}
#26
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int t = 0;
	t = a;
	a = b;
	b = t;
	cout << a << " " << b;
}
#27
#include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
#include<string>
using namespace std;
int main() {
	int a, b, c;
	a = 0;
	b = 2;
	c = 5;
	a = a + b;
	b = c - a + b;
	c = a + c;
	cout << a << " " << b << " " << c;
	return 0;
}
#28
#include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
#include<string>
using namespace std;
int main() {
	double nach, pro, let;
	cin >> nach >> pro >> let;
	cout << nach * pow((1 + 0, 01 * pro), let);
	return 0;
}
#29
#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << a << " " << b;
}
#30
#include <iostream>
using namespace std;
int main()
{
	int a, p, p1, p2, p3, p4;

	cin >> a;
	p = a * a;
	p1 = p * p;//2
	p2 = p1 * p;//3
	p3 = p2 * p2 * p1 / a;//4
	cout << "a4=" << p1 << endl << "a6=" << p2 << endl << "a15=" << p3 << endl;

	system("pause");
	return 0;
}
#31
#include <iostream>
using namespace std;
int main() {
	int k = 647 * 170;
	int num;
	num = k / (30 * 30);
	cout << num;
}
#32
#include <iostream>
using namespace std;
int main() {
	int a;
	a = 10 * (237 - 7) / 10 + 7;
}
#33
#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	if (a > 0 && b > 0 && a > (b * b)) {
		cout << sqrt(a - sqrt(b));
	}
}
#34
#include <iostream>
using namespace std;
int main() {
	int x;
	cin >> x;
	if (x > 3) {
		cout << x + 10 << endl;
	}
	else {
		cout << x - 10 << endl;
	}
	system("pause");
}
#35
#include <iostream>
using namespace std;
int main() {
	int x;
	cin >> x;
	if (x < 7) {
		cout << "Yes" << endl;
	}
	else if (x > 10) {
		cout << "NO" << endl;
	}
	else if (x == 9) {
		cout << "Error" << endl;
	}
	else {
		cout << "nothing";
	}
	system("pause");
}
#36
include <iostream>
using namespace std;
int main() {
	int x;
	cin >> x;
	if (x <= 1) {
		cout << "January" << endl;
	}
	else if (x <= 2) {
		cout << "February" << endl;
	}
	else if (x <= 3) {
		cout << "March" << endl;
	}
	else if (x <= 4) {
		cout << "April" << endl;
	}
	else if (x <= 5) {
		cout << "May" << endl;
	}
	else if (x <= 6) {
		cout << "June" << endl;
	}
	else if (x <= 7) {
		cout << "July" << endl;
	}
	else if (x <= 8) {
		cout << "August" << endl;
	}
	else if (x <= 9) {
		cout << "September" << endl;
	}
	else if (x <= 10) {
		cout << "October" << endl;
	}
	else if (x <= 11) {
		cout << "November" << endl;
	}
	else if (x <= 12) {
		cout << "December" << endl;
	}
	else {
		cout << "dont exist";
	}
	system("pause");
}

#include <iostream>
using namespace std;
int main() {
	int x, y;
	cin >> x >> y;
	if (x > y) {
		cout << x;
	}
	else {
		cout << y;
	}
	system("pause");
}//37

#include <iostream>
using namespace std;
int main() {
	int x, y;
	cin >> x >> y;
	if (x - y <= 100 && x - y >= -100) {
		cout << "yes";
	}
	else {
		cout << "No";
	}
	system("pause");
}//38

#include <iostream>
using namespace std;
int main() {
	int x, y;
	cin >> x >> y;
	if (x > y) {
		cout << "yes";
	}
	else {
		cout << y << " " << x;
	}
	system("pause");
}//39

#include <iostream>
using namespace std;
int main() {
	int x;
	cin >> x;
	if (x > -10 && x < 10) {
		x += 5;

	}
	else {
		x -= 10;

	}
	cout << x;
}//40

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main() {
	int nedelya, mesyas, let;
	cin >> nedelya >> mesyas >> let;
	int day = (let * 365) + (mesyas * 30) + 7 * nedelya;
	cout << day;
}//25
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main() {
	double a;
	cin >> a;
	if (a > 100 || a < -100) {
		a = 0;
	}
	else {
		a++;
	}
	cout << a;
}
//41


#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main() {
	double a;
	cin >> a;
	if (a >= 2 && a <= 5) {
		a = a + 10;
	}
	else if (a >= 7 && a <= 40) { a = a + 100; }
	else if (a >= 3000 || a <= 0) {
		a = 3 * a;
	}
	else {
		a = 0;
	}
	cout << a;
}//42


#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main() {
	int a;
	cin >> a;
	if (a >= 1 && a <= 12) {
		if (a < 2) { cout << "Winter"; }
		else if (a < 5) { cout << "Spring"; }
		else if (a < 8) { cout << "Summer"; }
		else if (a < 11) { cout << "Autumn"; }
		else { cout << "winter"; }
	}
	else {
		cout << "In this number has not month";
	}
}//43

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	if (a % 2 == 0) {
		if (a != 10 && b != 10) {
			cout << a + b;
		}
	}
	else { cout << a * b; }
	//44
}
#include <iostream>
#include <cstring>
#include <cmath>
		using namespace std;
	int main() {
		int a, b, c;
		cin >> a >> b >> c;
		if (a % 3 == 0 && b % 3 == 0) { if (a > 10 && b > 10 && c > 10) { cout << "Yes"; } }
		else { cout << "no"; }

	} //45
}
	#include <iostream>
#include <cstring>
#include <cmath>
		using namespace std;
	int main() {
		int a, b, c, sum = 0;
		cin >> a >> b >> c;
		if (a % 5 == 0) {
			sum += a;
		}
		if (b % 5 == 0) {
			sum += b;
		}
		if (c % 5 == 0) {
			sum += c;
		}
		else if (a % 5 != 0 && b % 5 != 0 && c % 5 != 0) {
			cout << "ERroR";
		}
		cout << sum;
	}//46

#include <iostream>
#include <cstring>
#include <cmath>
	using namespace std;
	int main() {
		int a, b, c;
		cin >> a >> b >> c;
		if (a > b && b > c) { cout << a; }
		else if (a > c && c > b) { cout << a; }
		else if (b > a && a > c) { cout << b; }
		else if (b > c && a < c) { cout << b; }
		else { cout << c; }
	} // 47
}
#include <iostream>
#include <cstring>
#include <cmath>
		using namespace std;
	int main() {
		int a, b, c;
		cin >> a >> b >> c;
		if (a > b && b > c) { cout << a << " " << b; }
		else if (a > c && c > b) { cout << a << " " << c; }
		else if (b > a && a > c) { cout << b << " " << a; }
		else if (b > c && a < c) { cout << b << " " << c; }
		else if (b < a && a < c) { cout << b << " " << c; }
		else if (b < c && a > b) { cout << a << " " << c; }
	}//48

#include <iostream>
#include <cstring>
#include <cmath>
	using namespace std;
	int main() {
		int a[4], max = 0;

		for (int i = 0; i < 4; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < 4; i++) {
			if (max < a[i])
				max = a[i];
		}
		cout << max;
	}//49

#include <iostream>
#include <cstring>
#include <cmath>
	using namespace std;
	int main() {
		double a, b, c;
		cin >> a >> b >> c;
		if (a == b || b == c || a == b || a == c)
			cout << "Yes";
		else {
			cout << "NO";
		}
	}
}//50

