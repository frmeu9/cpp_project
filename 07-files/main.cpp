#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string const filepath("C:/Users/user418/Documents/Personnel/cpp_project/07-files/myfile.txt");
    ofstream myflux(filepath.c_str());

    if(myflux){
        myflux << "This is the first sentence to be written in the file." << endl;
        myflux << "Francoise Meunier" << endl;
        myflux << 24 << endl;
    }
    else {
        cout << "ERROR: Can't find the specified file: " << filepath << endl;
    }

    // to add stuff at the end of an existing file
    ofstream myflux2(filepath.c_str(), ios::app);

    return 0;
}
