#include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
#include<string> 
using namespace std;
 int main() {
	     for (int j = 1000; j <= 9999; j++) {
		         if ((j / 1000 % 10) == 3 || (j / 100 % 10) == 3 || (j / 10 % 10) == 3 || (j % 10) == 3) {
			             cout << j << " ";
                 }
		 }
 }
