#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string const filepath("C:/Users/user418/Documents/Personnel/cpp_project/07-files/myfile.txt");
    ofstream myflux(filepath.c_str());

    if(myflux){
        myflux << "This is the first sentence to be written in the file." << endl;
        myflux << "Username: Francoise Meunier" << endl;
        myflux << "Age: " << 24 << endl;
    }
    else {
        cout << "ERROR: Can't find the specified file: " << filepath << endl;
    }

    // to add stuff at the end of an existing file
    ofstream myflux2(filepath.c_str(), ios::app);

    if (myflux2)
    {
        myflux2 << "Pet: cockatiel" << endl;
    }
    else {
        cout << "ERROR: Can't find the specified file: " << filepath << endl;
    }

    // to open file in read-only mode
    ifstream myflux3(filepath.c_str());  //Ouverture d'un fichier en lecture

    if(myflux3)
    {
        // to read line by line: getline()
        // to read words by words: <<
        // to read char by char: get()

        string line;
        getline(myflux3, line);
        cout << line << endl;

        // when changing reading mode, just like with cin and cin.ignore, we have to add myflux3.ignore()

        string word;
        myflux3 >> word;
        cout << word << endl;

        myflux3.ignore();

        char a;
        myflux3.get(a);
        cout << a << endl;

    }
    else
    {
        cout << "ERROR: Can't open the specified file: " << filepath << endl;
    }

    // read the whole file
    ifstream myflux4(filepath.c_str());
    if(myflux4)
    {
        //L'ouverture s'est bien passée, on peut donc lire

        string line2; //Une variable pour stocker les lignes lues

        while(getline(myflux4, line2)) //Tant qu'on n'est pas à la fin, on lit
        {
            cout << line2 << endl;
        }
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
    }

    // how to open and close a file (not necessary)
    ofstream myflux5;
    myflux5.open(filepath.c_str());

    myflux5.close();

    // cursor: knowing the position
    // for ifstream: tellg()
    // for ofstream: tellp()

    ofstream file(filepath.c_str());
    int position = file.tellp();
    cout << "We are at the " << position << "th character of the file." << endl;

    // changing the position of the cursor
    // for ifstream: seekg()
    // for ofstream: seekp()
    // arguments of seekg(number_of_char_to_move, starting_char)
    // position: ios::beg (beginning), ios::end, ios::cur (current position)

    file.seekp(10, ios::cur);
    int position2 = file.tellp();
    cout << "We are at the " << position2 << "th character of the file." << endl;

    // knowing the file size
    // for ifstream: tellg()
    // for ofstream: tellp()

    cout << "Size of the file: " << file.tellp() << " bytes" << endl;

    return 0;
}
