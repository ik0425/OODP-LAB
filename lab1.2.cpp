#include <iostream>

using namespace std;

int main() {
    int units;
    int bill = 0;

    cout << "--- Electricity Bill Calculator ---" << endl;
    cout << "Enter the number of units consumed: ";
    cin >> units;

    // Slab 1: First 100 units at 5 per unit
    if (units <= 100) {
        bill = units * 5;
    } 
    // Slab 2: Next 100 units (101 to 200) at 7 per unit
    else if (units <= 200) {
        // First 100 units cost 5 each, remaining units cost 7 each
        bill = (100 * 5) + ((units - 100) * 7);
    } 
    // Slab 3: Above 200 units at 10 per unit
    else {
        // First 100 units cost 5, next 100 cost 7, rest cost 10
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    }

    cout << "Total Electricity Bill: " << bill << endl;

    return 0;
}
