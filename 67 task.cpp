#include <iostream>
#include <string>
using namespace std;
int main()
{
	string n;
	cin >> n;
	int ind1 = 0, ind2=0, max =INT_MIN, min = INT_MAX;
	for (int i = 0; i < n.length(); i++) {
		if (n[i] > max) {
			max = n[i];
			ind1 = i;
		}
		if(n[i]<min){
			min = n[i];
			ind2 = i;
		}
	}
	swap(n[ind1], n[ind2]);
	cout << n;
	return 0;
}