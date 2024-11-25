#include <iostream>
#include <cmath>

using namespace std;

double cube_area(double side) {
    return pow(side, 3);
}

int main() {
    double side, area;

    cout << "Enter the side length of the cube: ";
    cin >> side;

    area = cube_area(side);

    cout << "The area of the cube is: " << area << endl;

    return 0;
}
