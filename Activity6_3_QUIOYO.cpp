#include <iostream>
using namespace std;
int main()
{
int counter, grade, total, average;
//Determine the total and counter
total = 0;
 counter = 1;
//Calculate the average and total of the Class average
while (counter <= 10) {
cout << "Enter the grade: ";
cin >> grade;
total = total + grade;
counter = counter + 1;
}
//Determine the Class average in total
average = total + grade;
cout << "Class average is:" << average << endl;
return 0;
}
