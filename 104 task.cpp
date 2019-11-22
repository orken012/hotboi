#include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
#include<string> 
using namespace std;
 int main() {
	     int count = 0;
	     for (int i = 1000; i <= 9999; i++) {
			 if (((i / 1000 % 10) + (i / 100 % 10) + (i / 10 % 10) + (i % 10)) * 600 == i) {
				 count++;
			 }
	     }
	   cout << count << endl;
 }
