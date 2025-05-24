#include "../include/Giocatore.h"
#include <iostream>
#include <string>
using namespace std;

Giocatore::Giocatore(string n, string c)
{
    n = nome;
    c = colore;
}


void Giocatore :: controlloPedine() 
{
   do{
        if(colore!="blu" && colore!="rosso" && colore!="giallo" && colore!="verde")
        {
            cout<<"il colore inserito non e' valido. Inserire un nuovo colore"; 
            cin >> colore; 
        };
   }while(colore!="blu" && colore!="rosso" && colore!="giallo" && colore!="verde");
}

string Giocatore :: getColore() {
    return colore; 
}