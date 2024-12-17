#include <iostream>
using namespace std;
int main()
{
int age;
double fare, discountedFare;
cout << "Enter your age:";
cin >> age;
//Calculating the discount based on the age
if (age >= 60) {
//Senior Citizen
discountedFare = 0.9 * fare;
} else if (age >= 18 && age < 60){
//Student Discount
discountedFare = 0.92 * fare;
} else {
//Invalid Discount
discountedFare = fare;
}
fare = max(discountedFare, 9.0);
cout << "Your fare is:" << fare << endl;
return 0;
}
