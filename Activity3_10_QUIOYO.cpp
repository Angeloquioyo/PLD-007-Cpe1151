#include <iostream>
using namespace std;

int main()
{
	//The Days in each Month
	int daysInJanuary = 31;
	int daysInFebruary = 28;
	int daysInMarch = 31;
	int daysInApril = 30;
	int daysInMay = 31;
	int daysInJune = 30;
	int daysInJuly = 31;
	int daysInAugust = 31;
	int daysInSeptember = 30;
	int daysInOctober = 31;
	int daysInNovember = 30;
	int daysInDecember = 31;
	
	//Calculate days in each quarters
	
	int quarter1 = daysInJanuary + daysInFebruary + daysInMarch;
	int quarter2 = daysInApril + daysInMay + daysInJune;
	int quarter3 = daysInJuly + daysInAugust + daysInSeptember;
	int quarter4 = daysInOctober + daysInNovember + daysInDecember;
	
	//Print Results
	
	cout << " Days in Q1 of the current year: " << quarter1 << endl;
	cout << " Days in Q2 of the current year: " << quarter2 << endl;
	cout << " Days in Q3 of the current year: " << quarter3 << endl;
	cout << " Days in Q4 of the current year: " << quarter4 << endl;
	return 0;
	
	
	
	
	
	
}
