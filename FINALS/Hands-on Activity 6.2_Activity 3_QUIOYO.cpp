#include <iostream>
#include <iomanip>

using namespace std;

double celsius_to_fahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

double fahrenheit_to_celsius(double fahrenheit) {
    return (fahrenheit - 32) * 5  / 9;
}

int main() {
    cout << "Celsius to Fahrenheit Conversion Table:\n";
    cout << "Celsius\tFahrenheit\n";
    for (int celsius = 0; celsius <= 100; celsius++) {
        double fahrenheit = celsius_to_fahrenheit(celsius);
        cout << setw(6) << celsius << "\t" << fixed << setprecision(1) << setw(8) << fahrenheit << endl;
    }

    cout << "\nFahrenheit to Celsius Conversion Table:\n";
    cout << "Fahrenheit\tCelsius\n";
    for (int fahrenheit = 32; fahrenheit <= 212; fahrenheit++) {
        double celsius = fahrenheit_to_celsius(fahrenheit);
        cout << setw(6) << fahrenheit << "\t" << fixed << setprecision(1) << setw(8) << celsius << endl;
    }

    return 0;
}
