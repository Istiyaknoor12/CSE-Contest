#include <iostream>
using namespace std;

// Function with two arguments
void print(int a, int b) {
    cout << "Two Arguments: " << a << ", " << b << endl;
}

// Function with three arguments
void print(int a, int b, int c) {
    cout << "Three Arguments: " << a << ", " << b << ", " << c << endl;
}

int main() {
    print(5, 10);         // Calls print(int a, int b)
    print(5, 10, 15);     // Calls print(int a, int b, int c)
    return 0;
}
