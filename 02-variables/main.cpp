#include <iostream>
using namespace std;

int main()
{
    int ageUser(24); //Une variable pour contenir l'age de l'utilisateur
    int& ageRef(ageUser); //Et une reference sur la variable 'ageUser'

    //On peut utiliser à partir d'ici
    //'ageUSer' ou 'ageRef' indistinctement
    //Puisque ce sont deux etiquettes de la meme case en memoire

    cout << "Age de l'utilisateur: " << ageUser << endl;
    cout << "Age de l'utilisateur (par la reference): " << ageRef << endl;

    int nombreAmis(50);
    double pi(3.14159);
    bool estMonAmi(true);
    char lettre('a');
    string userName("francoise.meunier");

    cout << "Nom: " << userName << endl;

    // On peut declarer une variable sans lui donner de valeur
    int yearsAtSchool;
    int ageMarc(24), ageMathieu(17), ageCocka(5);

    string speciesCocka("bird");

    cout << "Cocka is a " << speciesCocka << " and he is " << ageCocka << " years old" << endl;

    return 0;
}
