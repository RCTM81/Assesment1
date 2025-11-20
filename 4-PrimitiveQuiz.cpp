#include <iostream>
#include <algorithm> 
using namespace std;

string toLower(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}

int main() {
    string a;
    int score = 0;
    string q[5] = {
        "France", "Germany", "Italy", "Spain", "Portugal"
    };
    string correct[5] = {
        "paris", "berlin", "rome", "madrid", "lisbon"
    };

    for (int i = 0; i < 5; i++) {
        cout << "Capital of " << q[i] << ": ";
        getline(cin, a);
        if (toLower(a) == correct[i]) {
            cout << "Correct!\n"; score++;
        } else {
            cout << "Wrong. It's " << correct[i] << ".\n";
        }
    }

    cout << "Your score: " << score << "/5" << endl;
    return 0;
}

