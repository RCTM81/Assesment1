#include <iostream>
using namespace std;

string checkEven(int num) {
    if (num % 2 == 0) {
        return "The provided number is even";
    } 
    else {
        return "The provided number is odd";
    }
    
}

int main() {
    int userNumber;

    cout << "Please enter a number: ";
    cin >> userNumber;

    string result = checkEven(userNumber);
    cout << result << endl;


    return 0;
}
