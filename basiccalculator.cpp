#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operator (+ or -): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> num2;

    if (operation == '+') {
        cout << "Result: " << num1 + num2 << endl;
    } else if (operation == '-') {
        cout << "Result: " << num1 - num2 << endl;
    } else {
        cout << "Error: Invalid operator." << endl;
    }

    return 0;
}
