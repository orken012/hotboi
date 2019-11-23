#include <iostream>
using namespace std;
int main () {
  int sm=0;
  for(int i=1; i<=112; i=3+i) {
      sm += i;
  }
  cout << sm << endl;
    return 0;
}