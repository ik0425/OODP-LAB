#include <iostream>

using namespace std;

// Define the Date class
class Date {
private:
    int month;
    int day;
    int year;

public:
    // Member function to get date in 12/31/02 format
    void getdate() {
        char slash; // Dummy variable to store the '/'
        cout << "Enter date (mm/dd/yy): ";
        // We read month, then the '/', then day, then the '/', then year
        cin >> month >> slash >> day >> slash >> year;
    }

    // Member function to show the date
    void showdate() {
        cout << "The date is: " << month << "/" << day << "/" << year << endl;
    }
};

int main() {
    // Create an object of the Date class
    Date d1;

    cout << "--- Date Entry System ---" << endl;
    
    // Call member functions using the object
    d1.getdate();
    d1.showdate();

    return 0;
}
