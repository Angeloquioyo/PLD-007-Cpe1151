#include <iostream>
using namespace std;
int main(){
int dayNumber;
cout << "Enter a day number (0-6):";
cin >> dayNumber;
if (dayNumber >= 0 && dayNumber <= 6){
string days [] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
cout << days [dayNumber] << endl;
} else {
cout << "Error, no such day." << endl;

}

return 0;

}
