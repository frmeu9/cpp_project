#include <iostream>
using namespace std;

int main()
{
    int ageUser(23); //Une variable pour contenir l'âge de l'utilisateur
    int& ageRef(ageUser); //Et une référence sur la variable 'ageUser'

    //On peut utiliser à partir d'ici
    //'ageUSer' ou 'ageRef' indistinctement
    //Puisque ce sont deux étiquettes de la même case en mémoire

    cout << "Age de l'utilisateur: " << ageUser << endl;
    cout << "Age de l'utilisateur (par la reference): " << ageRef << endl;

    int nombreAmis(50);
    double pi(3.14159);
    bool estMonAmi(true);
    char lettre('a');
    string userName("Francoune");

    cout << "Nom: " << userName << endl;

    // On peut déclarer une variable sans lui donner de valeur
    int yearsAtSchool;

    return 0;
}
