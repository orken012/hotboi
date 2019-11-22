#include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
#include<string>  
 using namespace std;
 int main() {
	     string number;
	     cin >> number;
	     int count = 0;
	     for (int i = 0; i < number.length(); i++) {
		         if (number[i] % 2 == 0) {
			             count++;
			
		}
		
	}
	   cout << count << endl;
	
}
