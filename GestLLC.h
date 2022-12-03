#include <iostream>

using namespace std;
//Structures _______________________________________________
typedef struct Liste
{
    int val;
    Liste *suiv;
}Liste;

//Fonctions ________________________________________________

void Creerv(Liste **l)
{
    char Reponse;
    bool ReponseBool=false;
    cout << "Donner un nombre pour une liste : ";
    Liste *t1;
    Liste *t2;
    t1=new Liste;
    cin >> t1->val;
    t1->suiv=NULL;
    *l=t1;
    //********************************************
    cout << "voulez-vous ajouter un autre numero (Y/N) : ";
    cin >> Reponse;
    if(Reponse == 'Y' || Reponse == 'y')
    {
        ReponseBool=true;
    }else
    {
        ReponseBool=false;
    }
    //*********************************************
    while(ReponseBool)
    {
        t2=new Liste;
        cout << "Donner un nombre pour la liste : ";
        cin >> t2->val;
        t2->suiv=NULL;
        t1->suiv=t2;
        t1=t2;
    //********************************************
    cout << "voulez-vous ajouter un autre numero (Y/N) : ";
    cin >> Reponse;
    if(Reponse == 'Y' || Reponse == 'y')
    {
        ReponseBool=true;
    }else
    {
        ReponseBool=false;
    }
    //*********************************************
    }
}

Liste *Creer(Liste *l)
{
    char Reponse;
    bool ReponseBool=false;
    cout << "Donner un nombre pour une liste : ";
    Liste *t1;
    Liste *t2;
    t1=new Liste;
    cin >> t1->val;
    t1->suiv=NULL;
    l=t1;
    //********************************************
    cout << "voulez-vous ajouter un autre numero (Y/N) : ";
    cin >> Reponse;
    if(Reponse == 'Y' || Reponse == 'y')
    {
        ReponseBool=true;
    }else
    {
        ReponseBool=false;
    }
    //*********************************************
    while(ReponseBool)
    {
        t2=new Liste;
        cout << "Donner un nombre pour la liste : ";
        cin >> t2->val;
        t2->suiv=NULL;
        t1->suiv=t2;
        t1=t2;
    //********************************************
    cout << "voulez-vous ajouter un autre numero (Y/N) : ";
    cin >> Reponse;
    if(Reponse == 'Y' || Reponse == 'y')
    {
        ReponseBool=true;
    }else
    {
        ReponseBool=false;
    }
    //*********************************************
    }
    return l;
}

void Affiche(Liste *l)
{
    cout << "__________________" <<endl;
    cout << "Affichage de LLC : \n";
    while(l!=NULL)
    {
        cout << l->val;
        cout << "\n";
        l=l->suiv;
    }
    cout << "__________________" <<endl;
}

int Occurence(Liste *l,int v)
{
    int nmbrdoc=0;
    while (l!=NULL)
    {
        if(l->val==v)
        {
            nmbrdoc++;
        }
        l=l->suiv;
    }
    return nmbrdoc;
}

bool Recherche(Liste *l,int v)
{
    while((l!=NULL)&&(l->val!=v))
    {
        l=l->suiv;
    }
    return(l!=NULL);
}

Liste *AjoutDebut(Liste *l,int v)
{
    Liste *ptr=new Liste;
    ptr->val=v;
    ptr->suiv=l;
    l=ptr;
    return l;
}

void AjoutFin(Liste *l,int v)
{
    Liste *ptr=new Liste;
    ptr->val=v;
    ptr->suiv=NULL;
    while(l->suiv!=NULL)
    {
        l=l->suiv;
    }
    l->suiv=ptr;
}

Liste *Supression(Liste *l,int v)
{
    Liste *t;
    Liste *Head=l;
    t=l;
    while((l!=NULL)&&(l->val!=v))
    {
        t=l;
        l=l->suiv;
    }
    if(l==NULL)
    {
        cout << "l'entier que vous avez entre n'existe pas " <<endl;
        return Head;
    }
    else
    {
        if(t==l)
        {
            Head=l->suiv;
            delete(t);
            return Head;
        }
        else
        {
            if(l->suiv==NULL)
            {
                t->suiv=NULL;
                delete(l);
                return Head;
            }
            else
            {
                t->suiv=l->suiv;
                delete(l);
                return Head;
            }
        }
    }
}
