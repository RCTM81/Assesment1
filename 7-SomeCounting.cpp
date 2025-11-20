#include <iostream>
using namespace std;

void printRange(int start, int end, int step = 1) {
    if (step > 0) {
        for (int i = start; i <= end; i += step)
            cout << i << endl;
    } else {
        for (int i = start; i >= end; i += step)
            cout << i << endl;
    }
    cout << endl;
}

int main() {
    printRange(0, 50);        
    printRange(50, 0, -1);     
    printRange(30, 50);        
    printRange(50, 10, -2);    
    printRange(100, 200, 5);   

    return 0;
}
