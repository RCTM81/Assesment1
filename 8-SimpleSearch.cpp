#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};
    string searchTerm = "Sam";
    bool found = false;

    for (int i = 0; i < 6; ++i) {
        if (names[i] == searchTerm) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << searchTerm << " was found in the list." << endl;
    } else {
        cout << searchTerm << " was not found." << endl;
    }

    return 0;
}
