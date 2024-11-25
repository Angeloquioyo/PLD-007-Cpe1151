#include <iostream>
#include <cmath>

using namespace std;

double fahrenheit_to_celsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

double celsius_to_fahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    double temperature, converted_temperature;
    char unit;

    cout << "Enter the temperature and unit (F or C): ";
    cin >> temperature >> unit;

    if (unit == 'F' || unit == 'f') {
        converted_temperature = fahrenheit_to_celsius(temperature);
        cout << temperature << "F is " << converted_temperature << "C" << endl;
    } else if (unit == 'C' || unit == 'c') {
        converted_temperature = celsius_to_fahrenheit(temperature);
        cout << temperature << "C is " << converted_temperature << "F" << endl;
    } else {
        cout << "Invalid unit. Please enter 'F' or 'C'." << endl;
    }

    return 0;
}
