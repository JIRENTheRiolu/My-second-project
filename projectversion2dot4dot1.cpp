#include <iostream>
using namespace std;

int main() {

    int target = 5;
    int guess;

    cout << "Guess the number (1-10): ";
    cin >> guess;

    if (guess == target) {
        cout << "The guess is correct.";
    }
    else if (guess < target) {
        cout << "The guess is lower than the target number.";
    }
    else {
        cout << "The guess is higher than the target number.";
    }

    return 0;
}