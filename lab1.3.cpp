#include <iostream>

using namespace std;

int main() {
    int n = 3; // Number of rows for the upper half
    int i, j, k;

    cout << "--- Diamond Star Pattern ---" << endl;

    // 1. Upper Half (including the middle row)
    for (i = 1; i <= n; i++) {
        // Print spaces
        for (j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print stars
        for (k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    // 2. Lower Half
    for (i = n - 1; i >= 1; i--) {
        // Print spaces
        for (j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print stars
        for (k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0; 
}