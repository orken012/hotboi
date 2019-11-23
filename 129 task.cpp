#include <iostream>129
using namespace std;

int main() {
	int s;
	for (int i = 2; i <= 100000; i++) {
		s = 1;
		for (int j = 2; j <= i / 2; j++)
			if (i % j == 0) s += j;
		if (s == i)
			cout << i << " ";
	}
	return 0;
}
