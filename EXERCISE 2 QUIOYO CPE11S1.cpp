#include <iostream>
using namespace std; 

int main() {
 cout << "/n/n Algorithm to get the sum, difference, product, remainder, quotient /n" << endl;
 //Local Variables
 int x = 5, y = 3, sum = 0, product = 0, difference = 0, remainder = 0;
 float quotient = 0;
 
 //Formula
 sum = x + y;
 product = x * y;
 difference = x - y;
 remainder = x % y;
 quotient = x /(double)y; 
 
 cout<<"Please type two integers"<<endl;
 cout<<"Enter the value of x"<<endl;
 cin>>x;
 cout<<"Enter the value of y"<<endl;
 cin>>y;
 
 //Printing Results 
 cout << "Sum = " << sum << endl;
 cout << "Product = " << product << endl;
 cout << "Difference = " << difference << endl;
 cout << "Quotient = " << quotient << endl;
 cout << "Remainder = " << remainder << endl;
 
 return 0;
 
 } 
 
 

