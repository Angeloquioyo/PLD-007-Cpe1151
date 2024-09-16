#include <iostream>
using namespace std;

int main(){
	int number, total;
	cout<<" Enter a number less than 10 but not less than 3: " ;
	cin>>number;
	
	while (number < 10) {
	cout << "Enter a number less than 10 but not less than 3: " ;
	cin >> number;
	total+=number;	
	}
	
	if (number >= 10) {
	cout<< "Then total amount is: " << total << endl;	
	}
return 0;
}

  





