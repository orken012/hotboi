#include <iostream>
#include <string>
using namespace std;
int main()
{
	string n1,n2;
	cin >> n1>>n2;
	n1.erase(n1.end()-1);
	n2.erase(n2.end()-1);
	cout << n1+n2;
	return 0;
}