#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "How old are you?" << endl;
    cin >> age;
    cin.ignore();
    cout << "You are " << age << " years old" << endl;

    if (age >= 18)
    {
        cout << "You are consider an adult." << endl;
    }
    else if(16 <= age)
    {
        cout << "You can drive but you cannot drink yet." << endl;
    }
    else
    {
        cout << "You are consider a minor in Canada." << endl;
    }

    int nbSiblings;
    cout << "How many siblings do you have?" << endl;
    cin >> nbSiblings;
    cin.ignore();
    cout << "You have " << nbSiblings << " sisters or brothers." << endl;

    switch (nbSiblings)
    {
    case 0:
        cout << "You are a unique child" << endl;
        break;

    case 1:
        cout << "You have 1 sibling" << endl;
        break;

    case 2:
        cout << "You have 2 siblings" << endl;
        break;

    case 3:
        cout << "You have a big family" << endl;
        break;
    }



    return 0;
}
