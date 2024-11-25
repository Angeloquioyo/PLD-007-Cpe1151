#include <iostream>
#include <cmath>
#include <string>

using namespace std;

double convert_currency(double amount, string from_currency, string to_currency) {
    double exchange_rate = 55.0; // Example exchange rate (USD to PHP)

    if (from_currency == "USD" && to_currency == "PHP") {
        return amount * exchange_rate;
    } else if (from_currency == "PHP" && to_currency == "USD") {
        return amount / exchange_rate;
    } else {
        cout << "Invalid currency pair." << endl;
        return 0.0;
    }
}

int main() {
    double amount;
    string from_currency, to_currency;

    cout << "Enter the amount, from currency (USD or PHP), and to currency (USD or PHP): ";
    cin >> amount >> from_currency >> to_currency;

    double converted_amount = convert_currency(amount, from_currency, to_currency);

    if (converted_amount != 0.0) {
        cout << amount << " " << from_currency << " is " << converted_amount << " " << to_currency << endl;
    }

    return 0;
}
