#include <iostream>
using namespace std;

int main() {
    const int correctPassword = 12345;
    int userInput;
    int attemptsLeft = 5;

    while (attemptsLeft > 0) {
        cout << "Enter password: ";
        cin >> userInput;

        if (userInput == correctPassword) {
            cout << " Welcome to the Secure Area!" << endl;
            break;
        } else {
            attemptsLeft--;
            if (attemptsLeft > 0) {
                cout << " Incorrect password. You have " << attemptsLeft << " attempt(s) remaining." << endl;
            } else {
                cout << " Too many failed attempts. The authorities has been alerted!" << endl;
                cout << " --------------------------" << endl;
            }
        }
    }

    return 0;
}
