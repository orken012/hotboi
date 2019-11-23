#include <iostream>
using namespace std;
int main() {
    int  x0, y0, x, y,k=0,r;
    cin>>x0>>y0>>r;
    for(x=x0-r; x<=x0+r; x++){
        for(y=y0-r; y<=y0+r; y++){
            if(x*x+y*y<=r*r)
                k++;
        }
    }
    cout<<k;
  return 0;
}