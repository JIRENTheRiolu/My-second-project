#include <iostream>
using namespace std;

int main() {
    int a,b;

    cout<<"Enter two secpific numbers: ";
    cin>>a;
    cout<<endl;
    cin>>b;
    cout<<endl;

    if (a>b) {
        cout<<"The first number is bigger than the second.";
    }

    else if (a<b) {
        cout<<"The second number is bigger than the first.";
    }

    else if (a==b) {
        cout<<"The first and second number and equal.";
    }
}