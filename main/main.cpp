#include "../include/Giocatore.h"
#include "../include/Tabellone.h"
#include "../include/Regole.h"
#include "../include/Carta.h"
#include "../include/Mazzo.h"
#include "../include/Estensione.h"

#include <iostream>
#include <string>

using namespace std;


int main(){
    
    string nomeGiocatore, colore1, colore2, colore3, colore4;
    int scelta;
    
    cout << "i colori delle pedine disponibili sono blu, rosso, giallo e verde. Non è possibile per due giocatori scegliere la stessa pedina " << endl;

    //primo giocatore
    cout << "inserici il nome e colore della pedina del primo giocatore " << endl ;
    cin >> nomeGiocatore;
    cin >> colore1;
    Giocatore Giocatore1(nomeGiocatore, colore1);
    Giocatore1.controlloPedine(); //meccanismo per controllare che il colore sia valido

    //secondo giocatore
    cout << "inserici il nome e colore della pedina del secondo giocatore " << endl ;
    cin >> nomeGiocatore;
    do {
        cin >> colore2;
        if (Giocatore1.getColore()==colore2) //meccanismo per controllare che non sia stato lo stesso colore
        {
            cout << "non possono essere scelte le pedine di uno stesso colore, inserire il nuovo colore" << endl;
        }
    } while(Giocatore1.getColore()==colore2);
    Giocatore Giocatore2(nomeGiocatore, colore2);
    Giocatore2.controlloPedine(); //meccanismo per controllare che il colore sia valido
    
    //terzo giocatore
    cout << "inserici il nome e colore della pedina del secondo giocatore " << endl ;
    cin >> nomeGiocatore;
    do {
        cin >> colore3;
        if (Giocatore1.getColore()==colore3 || Giocatore2.getColore()==colore3) //meccanismoper controllare che non sia stato lo stesso colore
        {
        cout << "non possono essere scelte le pedine di uno stesso colore, inserire il nuovo colore" << endl;
        }
    } while(Giocatore1.getColore()==colore3 || Giocatore2.getColore()==colore3);
    Giocatore Giocatore3(nomeGiocatore, colore3);
    Giocatore3.controlloPedine(); //meccanismo per controllare che il colore sia valido

    //quarto giocatore
    cout << "inserici il nome e colore della pedina del secondo giocatore " << endl ;
    cin >> nomeGiocatore;
    do {
        cin >> colore4;
        if (Giocatore1.getColore()==colore4 || Giocatore2.getColore()==colore4 || Giocatore3.getColore()==colore4) //meccanismo per controllare che non sia stato lo stesso colore
        {
            cout << "non possono essere scelte le pedine di uno stesso colore, inserire il nuovo colore" << endl;
        }
    } while(Giocatore1.getColore()==colore4 || Giocatore2.getColore()==colore4 || Giocatore3.getColore()==colore4);
    Giocatore Giocatore4(nomeGiocatore, colore4);
    Giocatore4.controlloPedine(); //meccanismo per controllare che il colore sia valido

    
return 0;
}