#include <iostream>
using namespace std;

int main() {
    double number;

    cout<<"Enter a specific number: ";
    cin>>number;

    if (number>0) {
        cout<<"The number is positive.";
    }

    else if (number<0) {
        cout<<"The number is negative.";
    }

    else if (number==0) {
        cout<<"The number is 0.";
    }
}