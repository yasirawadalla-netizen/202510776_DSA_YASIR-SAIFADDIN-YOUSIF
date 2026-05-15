#include <iostream>
#include <string>

using namespace std;

// 1. Function to greet the user
void greetUser(string name) {
    cout << "Congratulations " << name << "!" << endl;
}

// 2. Function to add 4 float numbers
float addFourFloats(float a, float b, float c, float d) {
    return a + b + c + d;
}

// 3. Recursive function for Fibonacci
int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    // Example for Task 1
    string userName;
    cout << "Enter your name: ";
    getline(cin, userName);
    greetUser(userName);

    return 0;
}
