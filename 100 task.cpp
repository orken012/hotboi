#include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
#include<string> 
  using namespace std;
 bool thereisntfivesix(int n)
 {
	     while (n > 0)
		     {
		         if (n % 10 == 5 || n % 10 == 6) return false;
		         n /= 10;
		     }
	     return true;
	 }
int main()
 {
     cout << "\n";
	     for (int i = 1000; i <= 9999; i++)
		     {
		         if (thereisntfivesix(i))
			             cout << i << " ";
		   }
	   cout << "\n";
	     system("pause");
	     return 0;
	 }
