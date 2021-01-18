#include <iostream>
using namespace std;

int main()
{
    int userAge(16);

    // how to get the adress of the variable in the computer
    // A pointer is a variable that contains another variable's address
    // always declare pointer by initializing them at 0
    int *pointer(0);
    pointer = &userAge;

    cout << "The variable value is: " << userAge << endl;
    cout << "The address is: " << &userAge << endl;
    cout << "Pointer value is : " << pointer << endl;
    cout << "Pointed value is : " << *pointer << endl;

    // Recap
    // variable: value
    // &variable: address
    // pointer: pointer value, which is address of the pointed variable
    // *pointer: pointed variable value

    // Complete example
    // How to use pointer

    int* ptr(0);
    ptr = new int;

    cout << "How old are you? \n";
    cin >> *ptr;

    cout << "You are " << *ptr << " years old." << endl;

    delete ptr;   //free the memory
    ptr = 0;       //make the pointer point to nothing
    return 0;
}