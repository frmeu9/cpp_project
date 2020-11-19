
// Created by user418 on 2020-11-18.
#include "someFunctions.h"


// define a function
int addTwoToNumber(int received_number) {
    /*
    * Function that adds 2 to the number in argument
    * - received_number : argument
    * returned value : received_number + 2
    */
    // return received_number + 2;
    received_number += 2;
    return received_number;
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

int askAge() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    return age;
}

double squareNumber(double x) {
    return x * x;
}

// define function that returns nothing
void sayHello() {
    cout << "Hello!" << endl;
    // no return because nothing get returned
}

void drawRectangle(int length, int height) {
    cout << "Length: " << length << endl;
    cout << "Height: " << height << endl;

    for (int i(0); i <= height; i++) {
        for (int j(0); j <= length; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int getNumberOfSeconds(int hours, int minutes, int seconds)
{
    /*
     * Arguments minutes and seconds are not mandatory
     * Only to be specified in the headers
     */

    int total = 0;

    total = hours * 60 * 60;
    total += minutes * 60;
    total += seconds;

    return total;
}
