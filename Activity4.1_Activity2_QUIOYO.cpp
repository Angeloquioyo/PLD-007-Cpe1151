#include <iostream>
using namespace std;


int main(){


int physics, chemistry, biology, mathematics, computer;
float average, percentage;
//Input the marks
cout << " Enter marks for Physics: ";
cin >> physics;
cout << "Enter marks for Chemistry: ";
cin >> chemistry;
cout<<"Enter marks for Biology: ";
cin >> biology;
cout << " Enter marks for Mathematics: ";
cin >> mathematics;
cout << "Enter marks for Computer: ";
cin >> computer;
//Calculate the average and percentage
average = (physics + chemistry + biology + mathematics + computer) / 5.0;
percentage = average;
//Using Nested if
if (percentage >= 90){
cout << " Grade: A " << endl;
} else if (percentage >= 80) {
cout << "Grade: B "<< endl;
} else if (percentage >= 70) {
cout << " Grade: C"<<endl;
} else if (percentage >= 60) {
cout << "Grade: D"<<endl;
} else if (percentage >= 50) {
cout<<"Grade: E" << endl;
} else if (percentage < 40) {
cout << "Grade: F" << endl;
}
cout << " The average/percentage is: " << percentage << "%" << endl;

return 0;

}
