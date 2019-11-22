#include <iostream> 
 using namespace std;
 int main() {
	 int n, i = 2, f1 = 0, f2 = 1, cur;
	   cin >> n;
	
		   while (i <= n)
		   {
		    cur = f1 + f2;
		     f1 = f2;
		     f2 = cur;
		     i++;
		   }
	   if (n <= 1)
		     cout << n;
	   else
		    cout << cur;

}
