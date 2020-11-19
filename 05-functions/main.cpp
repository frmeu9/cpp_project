#include <iostream>
#include "someFunctions.h"  // always include the header and not the .cpp file
using namespace std;


//// define a function
//int addTwoToNumber(int received_number) {
//    // return received_number + 2;
//    received_number += 2;
//    return received_number;
//}
//
//int addTwoNumbers(int a, int b) {
//    return a + b;
//}
//
//int multiplyThreeNumbers(int a, int b, int c) {
//    return a * b * c;
//}
//
//string askName() {
//    cout << "Enter your name: ";
//    string name;
//    cin >> name;
//    return name;
//}
//
//int askAge() {
//    int age;
//    cout << "Enter your age: ";
//    cin >> age;
//    return age;
//}
//
//double squareNumber(double x) {
//    return x * x;
//}
//
//// define function that returns nothing
//void sayHello() {
//    cout << "Hello!" << endl;
//    // no return because nothing get returned
//}
//
//void drawRectangle(int length, int height) {
//    cout << "Length: " << length << endl;
//    cout << "Height: " << height << endl;
//
//    for (int i(0); i <= height; i++) {
//        for (int j(0); j <= length; j++) {
//            cout << "*";
//        }
//        cout << endl;
//    }
//}

int main() {
    int a(10), b(10), c, d, age;
    string name;
    sayHello();
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
    c = addTwoToNumber(b);
    cout << "Adding 2 to " << b << " is " << c << endl;
    d = addTwoNumbers(a, b);
    cout << "Adding a: " << a << " and b " << b << " is " << d << endl;
    cout << "Value of c: " << c << endl;
    cout << "Multiply a, b and c: " << multiplyThreeNumbers(a, b, c) << endl;
    name = askName();
    cout << "Your name is " << name << endl;
    age = askAge();
    cout << "Your age is " << age << endl;

    for (int i(1); i <= age; i++) {
        cout << "The square of " << i << " is " << i * i << endl;
    }

    drawRectangle(age, age - 10);

    int number_of_seconds;
    number_of_seconds = getNumberOfSeconds(60, 60, 60);
    cout << "Number of seconds: " << number_of_seconds << endl;
    // passage par reference

    return 0;
}

