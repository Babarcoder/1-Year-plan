#include <iostream>
using namespace std;

int main() {
    double radius, area;
    const double PI = 3.14159;

    // Asking user to input the radius of the circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Calculating the area using the formula
    area = PI * radius * radius;

    // Displaying the result
    cout << "The area of the circle is: " << area << " square units" << endl;

    return 0;
}


