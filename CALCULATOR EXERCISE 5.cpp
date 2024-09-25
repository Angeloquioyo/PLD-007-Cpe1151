#include <iostream>
using namespace std;

int main ()
{
	//Create a C++ program that applies a Standard Calculator
	char op;
    float input1, input2;
    
    
    cout<<"Enter Operator: ";
    cin >> op;

    cout << " Enter Number: ";
	cin >> input1;
	cout << " Enter Number: ";
	cin >> input2;
    
		
	switch (op)
	{
		case '+':
			cout<< input1 << " + " << input2 << " = " << input1 + input2;
			break;
			
		case '-':
			cout << input1 << " - " << input2 << " = " << input1 - input2;
			break;
		
		case '*':	
			cout << input1 << " * " << input2 << " = " << input1 * input2;
			break;
			
		case '/':	
			cout << input1 << ' / ' << input2 << " = " << input1 * input2;
			break;
			
	}
	
	return 0;
}
