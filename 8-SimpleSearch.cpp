#include <iostream>
#include <string>

int main() {
    std::string names[] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};
    std::string searchTerm = "Sam";
    bool found = false;

    for (int i = 0; i < 6; ++i) {
        if (names[i] == searchTerm) {
            found = true;
            break;
        }
    }

    if (found) {
        std::cout << searchTerm << " was found in the list." << std::endl;
    } else {
        std::cout << searchTerm << " was not found." << std::endl;
    }

    return 0;
}
