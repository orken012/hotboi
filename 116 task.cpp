#include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
#include<string> 
 using namespace std;
 int main() {
	     int a, b;
	     cin >> a >> b;
	     int count = 0;
	     for (int i = a; i <= b; i++) {
		         if (i % 12 == 0) {
			             count++;
			
		}
		
	}
	   cout << count;
	     return 0;
	
}
