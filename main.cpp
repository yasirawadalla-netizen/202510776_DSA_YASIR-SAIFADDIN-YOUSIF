#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 1. Variable to store the chosen number
    int chosenNumber = 7;
    
    // 2. Variable to store the user's input
    int userGuess = 0;
    
    // 3. Array (list) to keep all the numbers entered by the user
    vector<int> attempts;

    cout << "--- Game: Guess the Number ---" << endl;

    // 4. While loop that continues as long as the user's guess is not equal to the chosen number
    while (userGuess != chosenNumber) {
        cout << "Enter your guess: ";
        cin >> userGuess;

        // 5. Immediately save the value into the array/list
        attempts.push_back(userGuess);

        // 6. If / else statements to compare the guess
        if (userGuess > chosenNumber) {
            cout << "Too high" << endl;
        } 
        else if (userGuess < chosenNumber) {
            cout << "Too low" << endl;
        } 
        else {
            cout << "Correct" << endl;
        }
    }

    // 7. For loop to display all guesses stored in the array
    cout << "\nAll your guesses:" << endl;
    for (int i = 0; i < attempts.size(); i++) {
        cout << attempts[i] << endl;
    }

    return 0;
}
