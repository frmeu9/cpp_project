#include <iostream>

using namespace std;


// define a function
int addTwoToNumber(int received_number) {
    return received_number + 2;
}

int addTwoNumbers(int a, int b) {
    return a + b;
}

int multiplyThreeNumbers(int a, int b, int c) {
    return a * b * c;
}

string askName() {
    cout << "Enter your name: ";
    string name;
    cin >> name;
    return name;
}

int main() {
    int a(10), b(10), c, d;
    string name;
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
    c = addTwoToNumber(b);
    cout << "Adding 2 to " << b << " is " << c << endl;
    d = addTwoNumbers(a, b);
    cout << "Adding a: " << a << " and b " << b << " is " << d << endl;
    cout << "Value of c: " << c << endl;
    cout << "Multiply a, b and c: " << multiplyThreeNumbers(a, b, c) << endl;
    name = askName();
    cout << "Your name is " << name;

    return 0;
}

