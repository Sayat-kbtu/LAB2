#include <iostream>

using namespace std;

int main() {
    int number;
    bool n = true;
    cout << "Number 1 - 100:" << endl;
    while (n) {
        cout << "Number: ";
        cin >> number;
        if (number == 0) {
            cout << "Go out of program." << endl;
            break;
        }
        n = (number >= 1 && number <= 100);
        if (n) {
            cout << "Number in range." << endl;
        } else {
            cout << "Number is not in range." << endl;
        }
    }
    return 0;
}
