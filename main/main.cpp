#include "../include/Giocatore.h"
#include "../include/Tabellone.h"
#include "../include/Regole.h"
#include "../include/Carta.h"
#include "../include/Mazzo.h"


#include <iostream>
#include <string>

using namespace std;
int main(){

    string nomeGiocatore, coloreGiocatore; 
   
    cout << "inserici il nome e colore della pedina del primo giocatore " << endl ;
    cin >> nomeGiocatore; 
    cin >> coloreGiocatore; 
    Giocatore Giocatore1(nomeGiocatore, coloreGiocatore); 

    cout << "i colori delle pedine sono: blu, giallo, rosso e verde. I giocatori non possono scegliere la stessa pedina "; 
    cout << "inserici il nome e colore della pedina del secondo giocatore " << endl ;
    cin >> nomeGiocatore; 
    cin >> coloreGiocatore; 
    Giocatore Giocatore2(nomeGiocatore, coloreGiocatore); 

    cout << "inserici il nome e colore della pedina del terzo giocatore " << endl ;
    cin >> nomeGiocatore; 
    cin >> coloreGiocatore; 
    Giocatore Giocatore3(nomeGiocatore, coloreGiocatore); 

    cout << "inserici il nome e colore della pedina del quarto giocatore " << endl ;
    cin >> nomeGiocatore; 
    cin >> coloreGiocatore; 
    Giocatore Giocatore4(nomeGiocatore, coloreGiocatore); 

    //inserire il controllo pedina !!!!!

}