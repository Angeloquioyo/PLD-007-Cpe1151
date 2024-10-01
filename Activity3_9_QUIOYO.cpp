#include <iostream>
using namespace std;

int main()
{
	
	int daysInJanuary = 31;
	int daysInFebruary = 28;
	int daysInCurrentFebruary = 29;
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
	
	int daysInFirstHalf = daysInJanuary + daysInFebruary +  daysInMarch + daysInApril + daysInMay + daysInJune;
	int daysInFirstHalfCurrentyear = daysInJanuary + daysInCurrentFebruary +  daysInMarch + daysInApril + daysInMay + daysInJune;
	int daysInSecondHalf = daysInJuly + daysInAugust + daysInSeptember + daysInOctober + daysInNovember + daysInDecember;
	
	cout << " Days in the First Half of the current year:" << daysInFirstHalf << endl;
	cout << " Days in the First Half of the current year:" << daysInFirstHalfCurrentyear << endl;
	cout << " Days in the Second Half of the current year:" << daysInSecondHalf << endl;
	cout << " Days in the current year:" << daysInFirstHalf + daysInSecondHalf << endl;
	cout << " Days in the current year:" << daysInFirstHalfCurrentyear + daysInSecondHalf << endl;
	return 0;
	
}
