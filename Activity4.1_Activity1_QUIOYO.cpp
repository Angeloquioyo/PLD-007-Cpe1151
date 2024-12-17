#include <iostream>
using namespace std;

//Input the marks


int main(){
int physics, chemistry, biology, mathematics, computer;
float average, percentage;
cout << "Enter marks for Physics: ";
cin >> physics;
cout << " Enter marks for Chemistry: ";
cin >> chemistry;
cout << " Enter marks for Biology: ";
cin >> biology;
cout << " Enter marks for Mathematics: ";
cin >> mathematics;
cout << "Enter marks for Computer: ";
cin >> computer;
//Calculate the average and percentage
average = (physics + chemistry + biology + mathematics + computer) / 5.0;
percentage = average;
//Using switch case
switch ((int) percentage / 10) {
case 9:
cout << "Grade: A" << endl;
break;
case 8:
cout << "Grade: B" << endl;
break;
case 7:
cout << "Grade: C" << endl;
break;
case 6:
cout << "Grade: D" << endl;
break;
case 5:
cout << "Grade: E" << endl;
break;
default:
cout << "Grade: F" << endl;
break;

}

return 0;

}
