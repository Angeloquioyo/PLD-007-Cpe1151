#include <iostream>
using namespace std;

int main(){
	
int number, total;

cout<<"Enter number lest than 10 but not less than 3:";
cin >> number;

while(number < 10){
	cout<<"Enter number less than 10 but not less than 3: " ;
	cin >> number;
	total += number;
}

if (number >= 10){
	cout<<"The total amout is: " << total << endl;
}
return 0;
}

  





