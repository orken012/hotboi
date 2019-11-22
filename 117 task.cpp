#include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
#include<string>  
 using namespace std; 
 int main(){ 
     int number; 
     int count=0; 
     do{ 
         cin>>number; 
         count+=number; 
     }while(number!=0); 
     cout<<count<<endl; 
     return 0; 
} 
