#include <iostream>
using namespace std;
int main () {
    int n,k,s=0;
    bool b=true;
    cin>>n>>k;
    for (int i=1; i<=n ; i++) {
        s+=i;
        if (s==k) {
            b=false;
            break;
        }
    }
    if (b==true)
        cout<<"Does not exist";
    else 
        cout<<"Exists";
    return 0;
}