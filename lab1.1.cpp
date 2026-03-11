#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

using namespace std;

int main() {
    // 1. Seed the random number generator
    srand(time(0));

    // 2. Generate a random number between 1 and 10
    int number = (rand() % 10) + 1;
    int guess;
    int i; // Loop counter

    cout << "--- Number Guessing Game ---" << endl;

    // 3. Loop for 5 attempts
    for (i = 1; i <= 5; i++) {
        cout << "Attempt " << i << ": Enter your guess: ";
        cin >> guess;

        // 4. Check the guess
        if (guess == number) {
            cout << "Correct! You guessed in " << i << " attempts." << endl;
            return 0; // Terminate the program immediately
        } 
        else if (guess > number) {
            cout << "Too High!" << endl;
        } 
        else {
            cout << "Too Low!" << endl;
        }
    }

    // 5. If loop finishes without correct guess
    cout << "Game Over! The correct number was " << number << endl;

    return 0;
}