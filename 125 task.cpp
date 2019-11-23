#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int a,b,h;
    double y;
    cin>>a>>b>>h;
     for(int i=a; i<=b; i=i+h)
    {
        y=i*i-sin(i);
        cout<<"x="<<i<<"  "<<"y="<<y<<endl; 
    }
    
    return 0;
}