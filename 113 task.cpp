#include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
#include<string> 
 using namespace std;
 int main() {
	 for (int i = 1; i <= 20; i++) {
		     for (int j = 1; j <= 10; j++)
			     if (i % 2 == 1)
			        cout << 1 << " ";
		     else
			        cout << i << " ";
		     cout << '\n';
		
	}
	
	
}
