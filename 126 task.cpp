#include < iostream>
 using namespace std;
 void function(int number) {
	    for (int i = 1; i < number; i++) {
		         if (number % i == 0) {
			             cout << i << " ";
			
		}
		
	}
	
}
int main() {
	     int number;
	     cout << "Enter a number: ";
	     cin >> number;
	     function(number);
	     return 0;
	
}
