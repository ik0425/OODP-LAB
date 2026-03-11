#include <iostream>

using namespace std;

// Define the Employee class
class employee
{
private:
    int emp_num;        // Member data: employee number
    float compensation; // Member data: compensation

public:
    // Member function to enter data
    void setData()
    {
        cout << "Enter employee number: ";
        cin >> emp_num;
        cout << "Enter compensation: ";
        cin >> compensation;
    }

    // Member function to display data
    void displayData()
    {
        cout << "Employee Number: " << emp_num << ", Compensation: " << compensation << endl;
    }
};

int main()
{
    // Create three objects of the employee class
    employee e1, e2, e3;

    cout << "--- Enter Data for 3 Employees ---" << endl;

    cout << "\nEmployee 1:" << endl;
    e1.setData();

    cout << "\nEmployee 2:" << endl;
    e2.setData();

    cout << "\nEmployee 3:" << endl;
    e3.setData();

    cout << "\n--- Displaying Employee Information ---" << endl;
    e1.displayData();
    e2.displayData();
    e3.displayData();

    return 0;
}
