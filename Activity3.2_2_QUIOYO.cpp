#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double principal = 1000.00;
	double interestRate = 0.05;
	int numYears = 10;
	
	cout << " Year/tAmout " << endl;
	cout << " ---------------- " << endl;
	
	for(int year = 1; year <= numYears; year ++){
	double amount = principal * (1 + interestRate, numYears);
	cout << year << "/t" << amount << endl;
	}
	
	return 0;
}
