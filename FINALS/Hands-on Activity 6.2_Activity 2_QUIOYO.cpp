#include <iostream>
#include <cmath>

using namespace std;

double hypotenuse(double side1, double side2) {
    return sqrt(pow(side1, 2) + pow(side2, 2));
}

int main() {
    double side1, side2, hypotenuse_length;

    // Triangle 1
    side1 = 3.0;
    side2 = 4.0;
    hypotenuse_length = hypotenuse(side1, side2);
    cout << "Hypotenuse of triangle 1: " << hypotenuse_length << endl;

    // Triangle 2
    side1 = 5.0;
    side2 = 12.0;
    hypotenuse_length = hypotenuse(side1, side2);
    cout << "Hypotenuse of triangle 2: " << hypotenuse_length << endl;

    return 0;
}
