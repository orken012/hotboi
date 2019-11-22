#include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
#include<string> 
 using namespace std;
 int main() {
	     for (int j = 10000; j <= 99999; j++) {
		        if (j % 2 == 0 && (j / 100 % 10) % 2 != 0 &&
			         ((j / 10000 % 10) + (j / 1000 % 10) + (j / 100 % 10) + (j / 10 % 10) + (j % 10)) % 4 == 0) {
			             cout << j << " ";
			
		}
		
	}
	     return 0;

}
