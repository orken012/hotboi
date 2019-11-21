#include <iostream>
using namespace std;
int main() {
	double dollar, ruble, kg;
	cin >> dollar;
	ruble = 70 * dollar;
	kg = ruble / 20.0;
	cout << dollar << " - " << ruble << " " << " - " << kg;
}
