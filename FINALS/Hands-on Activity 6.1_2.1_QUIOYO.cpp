#include<iostream>
using namespace std;


	int add(int a, int b) {
		return a + b;
	}
	
	int subtract(int a, int b) {
		return a - b;
	}
	
	int multiply(int a, int b) {
		return a * b;
	}
	
	int divide(int a, int b) {
		return (double) a / b;
	}
	
	int main(){
		int num1, num2;
		
		cout << "Enter two integers:";
		cin >> num1 >> num2;
			
			cout << "Sum: " << add(num1, num2) << endl;
			cout << "Difference: " << subtract(num1, num2) << endl;
			cout << "Product: " << multiply(num1, num2) << endl;
			cout << "Quotient: " << divide(num1, num2) << endl;
			
			return 0;
	}

