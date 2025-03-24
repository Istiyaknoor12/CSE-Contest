#include <iostream>
using namespace std;

// Function with one argument
void display(int a) {
    cout << "One Argument: " << a << endl;
}

// Function with two arguments
void display(int a, int b) {
    cout << "Two Arguments: " << a << ", " << b << endl;
}

// Function with three arguments
void display(int a, int b, int c) {
    cout << "Three Arguments: " << a << ", " << b << ", " << c << endl;
}

int main() {
    display(100);              // Calls display(int a)
    display(100, 200);         // Calls display(int a, int b)
    display(100, 200, 300);    // Calls display(int a, int b, int c)
    return 0;
}
