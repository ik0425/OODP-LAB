#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;      // numerators and denominators
    int num, den;        // result numerator and denominator
    char dummy, op;      // dummy for '/', op for '+','-','*','/'
    char choice;

    do {
        cout << "Enter first fraction (a/b): ";
        cin >> a >> dummy >> b;
        
        cout << "Enter operator (+, -, *, /): ";
        cin >> op;
        
        cout << "Enter second fraction (c/d): ";
        cin >> c >> dummy >> d;

        if (op == '+') {
            num = a * d + b * c;
            den = b * d;
        } 
        else if (op == '-') {
            num = a * d - b * c;
            den = b * d;
        } 
        else if (op == '*') {
            num = a * c;
            den = b * d;
        } 
        else if (op == '/') {
            num = a * d;
            den = b * c;
        } 
        else {
            cout << "Invalid Operator!" << endl;
            continue; 
        }

        cout << "Result: " << num << "/" << den << endl;
        
        cout << "Do you want to continue (y/n)? ";
        cin >> choice;
        cout << endl;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
