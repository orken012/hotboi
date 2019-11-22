#include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
#include<string> 
using namespace std;
int main() {
	for (int i = 100; i <= 999; i++) {
		if (pow((i / 100 % 10), 3) + pow((i / 10 % 10), 3) + pow((i % 10), 3) == i) {
			cout << i << " ";
        }
    }
}
