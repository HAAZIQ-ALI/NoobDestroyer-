#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int i;  // Declare once
    int difficulty;
    cout <<"Enter the difficulty (easy:1 ,medium:2 and hard:3)\n";
    cin >>difficulty;

    if (difficulty == 1) {
        i = 20;
    } else if (difficulty == 2) {
        i = 50;
    } else {
        i = 100;  // take that lil bro
    }

    int randomn = 1 + (rand() % i);
    int userchoice;
    int tries = 0;
    int maxTries = 10;  // for u noob 

    do {
        cout << "\nEnter a number between 1-" << i << ": ";
        cin >> userchoice;

        if (userchoice == randomn) {
            cout << "U guessed correctly!\n";
            cout << "You guessed the number in " << tries + 1 << " tries!\n";  // Add 1 to count the final correct guess
            return 0;  // Exit the program
        } else if (userchoice > randomn) {
            cout << "Guess a lower number please!\n";
        } else {
            cout << "Guess a higher number please!\n";
        }

        ++tries;  // Only increment when the user makes a wrong guess

        if (tries == maxTries) {  // If max attempts reached
            cout << "\nYou failed to guess the number in " << maxTries << " tries! The correct number was " << randomn << ".\n";
            return 0;  // u read u move u BAKA
        }

    } while (true);  // Infinite loop until user guesses correctly
}
