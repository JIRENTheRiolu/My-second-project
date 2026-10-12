#include <iostream>
using namespace std;

int main() {

    int target = 5;
    int guess;

    cout<<"Guess the number (1-10): ";
    cin>>guess;

    while (guess != target ) {
        if (guess < target) {
            cout<<"The guess is lower than the target number."<<endl;
        }
        else {
            cout<<"The guess is higher than the target number."<<endl;
        }
        cout<<"Please try again: ";
        cin>>guess;
    }

    cout<<"You guess is correct. Thank you for taking your time.";

    return 0;
}