#include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
#include<string> 
 using namespace std;
int main() {	
	     int rows, column;
	     cin >> rows;
	     column = 2 * rows;
	     for (int i = 0; i < rows; i++) {
		         cout << "A";
		         if (i == 0 || i == rows - 1) {
			             for (int i = 1; i < column; i++) {
				                 cout << "A";
				
			}
			             cout << endl;
			
		}
		       else {
			             for (int d = 1; d < column; d++) {
			                 if (d == column - 1)
					                 cout << "A";
				               else cout << "B";
				
			}
			           cout << endl;
			
		}
		
	}
	
}
