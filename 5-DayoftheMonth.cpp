#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter a month number (1-12): ";
    cin >> month;

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << "This month has 31 days.\n";
            break;
        case 4: case 6: case 9: case 11:
            cout << "This month has 30 days.\n";
            break;
        case 2:
            cout << "February has 28 days .\n";
            break;
        default:
            cout << "Invalid month. Please enter a number from 1 to 12.\n";
    }

    return 0;
}
