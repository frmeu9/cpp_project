#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    cout << "What is the value of pi?" << endl;
    double valueOfPi(0.0); //On cr�e une case m�moire pour stocker unnombre r�el
    cin >> valueOfPi; //Et on remplit cette case avec ce qu'�critl'utilisateur
    cin.ignore();
    cout << "What is your name?" << endl;
    string userName; //On cr�e une case m�moire pour contenir une chaine de caract�res
    getline(cin, userName); //On remplit cette case avec toute la ligne que l'utilisateur a �crit

    cout << "Your name is " << userName << " and pi value is " << valueOfPi << "." << endl;

    cout << "What is the value of a?" << endl;
    double a;
    cin >> a;
    cout << "What is the value of b?" << endl;
    double b; //On cr�e une case m�moire pour stocker unnombre r�el
    cin >> b; //Et on remplit cette case avec ce qu'�critl'utilisateur
    cout << "a is : " << a << " and b is : " << b << endl;
    int result;
    result = (a*b+a*a+b*b)*(a/b);
    cout << "Operation (a*b +a*a+b*b)*(a/b)" << endl;
    cout << "Result is : " << result << endl;

    string const carModelSerie("JTDKDTB35H");
    int startingNumber(10);
    cout << "Starting number: " << startingNumber << endl;
    ++startingNumber;
    cout << "Incrementing previous number: " << startingNumber << endl;
    cout << "a^b is " << pow(a, b) << endl;

    return 0;
}
