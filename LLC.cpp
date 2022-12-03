#include <iostream>
#include "GestLLC.h"

using namespace std;

int main()
{
    int prgrm,v,nmbrdoc;
    Liste *l=NULL;
    l=Creer(l);
    //Creerv(&l);
    Affiche(l);
    // affiche la liste des programes_________________________________________________________
    cout << "____________________________________________________________" <<endl;
    cout << "________________ La liste des programmes : _________________" <<endl;
    cout << "1. Nombre d'occurence d'entier dans la liste ." << endl;
    cout << "2. Rechercher un entier dans la liste ." << endl;
    cout << "3. Ajouter un entier au debut de la liste ." << endl;
    cout << "4. Ajouter un entier a la fin de la liste ." << endl;
    cout << "5. Suprimer un entier de la liste ." << endl;
    cout << "6. Exit ." << endl;
    do
    {
        cout << "____________________________________________________________" <<endl;
        cout << "Choisir un numero de la liste des programmes : ";
        cin >> prgrm;
        cout << "____________________________________________________________" <<endl;
        switch(prgrm)
        {
            case 1:
                {
                    cout << "Donner un entier pour calcule nombre d'occurence : ";
                    cin >> v;
                    nmbrdoc=Occurence(l,v);
                    cout << "Nombre d'occurence de cette entier est : " << nmbrdoc <<endl;
                }break;
            case 2:
                {
                    cout << "Donner un entier pour recherche dans la liste : ";
                    cin >> v;
                    bool existe=Recherche(l,v);
                    if(existe)
                    {
                        cout << "L'entier existe dans la liste" <<endl;
                    }
                    else
                    {
                        cout << "L'entier n'existe pas dans la liste" <<endl;
                    }
                }break;
            case 3:
                {
                    cout << "Donner un entier pour ajoute au debut de la liste : ";
                    cin >> v;
                    l=AjoutDebut(l,v);
                    cout << "La liste apres l'ajout : " <<endl;
                    Affiche(l);
                }break;
            case 4:
                {
                    cout << "Donner un entier pour ajoute a la fin de la liste : ";
                    cin >> v;
                    AjoutFin(l,v);
                    cout << "La liste apres l'ajout : " <<endl;
                    Affiche(l);
                }break;
            case 5:
                {
                    cout << "Donner un nombre pour suprimer : ";
                    cin >> v;
                    bool existe=Recherche(l,v);
                    l=Supression(l,v);
                    if(existe)
                    {
                        cout << "La liste apres la supression : " <<endl;
                        Affiche(l);
                    }
                }break;
            case 6:break;
            default:
                {
                    cout << "******** n'existe pas dans la liste des programmes" <<endl;
                }
        }
    }while((prgrm>0)&&(prgrm<6));

    return 0;
}
