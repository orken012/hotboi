#include <iostream>
using namespace std;
int main () {
    int n,a;
    cin>>n;
    a=n%10;
    n=n/10;
   while(n>0) {
        if (n%10 > mx)
        a=n%10;
        n=n/10;
   }
   cout<<mx<<endl;
    return 0;
}