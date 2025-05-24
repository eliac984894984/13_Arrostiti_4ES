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
    int numGiocatori=4;
    
    
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

    //meccanismo per scegliere se giocare con l'estensione o meno
    do {
        cout << "Scegli con quale estensione giocare:" << endl;
        cout << "1. Gioco base" << endl;
        cout << "2. Gioco con carte Disney" << endl;
        cout << "Scelta: ";
        cin >> scelta;


        if (scelta == 1) {
            cout << "Hai scelto il gioco base." << endl;
        } else if (scelta == 2) {
            cout << "Hai scelto il gioco con carte Disney." << endl;
        } else {
            cout << "Scelta non valida, riprova." << endl;
        }
    } while (scelta != 1 && scelta != 2);

    

    do{
         //giocatore 1 e' narratore 
        cout << "ora il giocatore 1 e' narratore. " << endl;
        cout << "queste sono le carte del narratore" << endl; 
        //stampare le carte 

        cout << "queste sono le carte del giocatore 2" << endl; 
        //stampare le carte

        cout << "queste sono le carte del giocatore 3" << endl; 
        //stampare le carte

        cout << "queste sono le carte del giocatore 4" << endl; 
        //stampare le carte

        cout << "ora il narratore deve scegliere la carta che i giocatori dovranno indovinare " << endl; 
        //mettere il metodo 
        cout << "ora il narratore deve dire la parola " << endl; 
        //mettere il metodo 
        cout << "il giocatore 2 sceglie la sua carta " << endl; 
        //mettere il metodo 
        cout << "il giocatore 3 sceglie la sua carta " << endl; 
        //mettere il metodo
        cout << "il giocatore 4 sceglie la sua carta " << endl; 
        //mettere il metodo

        //mischiare le carte con l'aggiunta della carta del narratore 

        cout << "ora il giocatore 2 punta la carta che ritiene corretta" << endl; 
        //metodo
        cout << "ora il giocatore 3 punta la carta che ritiene corretta" << endl; 
        //metodo
        cout << "ora il giocatore 4 punta la carta che ritiene corretta" << endl; 
        //metodo

        cout << "ora il narratore dice quale era la sua carta iniziale " << endl; 
        //metodo 

        //assegnazione punti 

        //giocatore 2 e' narratore 
        cout << "ora il giocatore 2 e' narratore." << endl;
        cout << "queste sono le carte del narratore" << endl; 
        //stampare le carte 

        cout << "queste sono le carte del giocatore 1" << endl; 
        //stampare le carte

        cout << "queste sono le carte del giocatore 3" << endl; 
        //stampare le carte

        cout << "queste sono le carte del giocatore 4" << endl; 
        //stampare le carte


         //giocatore 3 e' narratore 
        cout << "ora il giocatore 3 e' narratore." << endl;
        cout << "queste sono le carte del narratore" << endl; 
        //stampare le carte 

        cout << "queste sono le carte del giocatore 1" << endl; 
        //stampare le carte

        cout << "queste sono le carte del giocatore 2" << endl; 
        //stampare le carte

        cout << "queste sono le carte del giocatore 4" << endl; 
        //stampare le carte


         //giocatore 4 e' narratore
        cout << "ora il giocatore 4 e' narratore." << endl;
        cout << "queste sono le carte del narratore" << endl; 
        //stampare le carte 

        cout << "queste sono le carte del giocatore 1" << endl; 
        //stampare le carte

        cout << "queste sono le carte del giocatore 2" << endl; 
        //stampare le carte

        cout << "queste sono le carte del giocatore 3" << endl; 
        //stampare le carte


    }while(/*condizione di fine gioco-fine tabellone*/true);

return 0;
}