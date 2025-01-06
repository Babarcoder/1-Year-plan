#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if ((number > 0 && number % 2 == 0) || (number < 0 && !(number % 3 == 0))) {
        cout << "Condition met!" << endl;
    } else {
        cout << "Condition not met!" << endl;
    }

    return 0;
}

