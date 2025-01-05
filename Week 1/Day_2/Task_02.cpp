#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;

    // Asking user to input temperature in Celsius
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // Converting Celsius to Fahrenheit using the formula
    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    // Displaying the result
    cout << "Temperature in Fahrenheit: " << fahrenheit << "°F" << endl;

    return 0;
}

