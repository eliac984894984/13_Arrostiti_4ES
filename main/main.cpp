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
    
    string nomeGiocatore, colore1, colore2, colore3, colore4, parola;
    int scelta;
    int numGiocatori=4; 
    
    Carta c;
    c.inizializza();
    Mazzo m;
    
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

    //attribuzione delle prime 5 carte ai giocatori 
    m.distribuisci(numGiocatori);

    do{
        //le carte vengono mischiate: 
        c.mischia(); 
        
        //giocatore 1 e' narratore 
        cout << "ora il giocatore 1 e' narratore. " << endl;
        //stampare le carte del giocatore 
        cout << "il narratore seglie la carta che gli altri giocatori dovranno indovinare " << endl; 
        //metodo scarta da aggiungere
        cout << "ora il narratore deve dire la parola " << endl; 
        cin >> parola; 
        cout << "l'indicazione del narratore e'': " << parola << endl; 

        //i giocatori scelgono la loro carta
        for(int i=0; i<3; i++)
        {
            cout << "il giocatore " << i+2 << "scarta la sua carta " << endl; 
            //metodo scarta da aggiungere 
            

            //mischiare le carte con l'aggiunta della carta del narratore 
            

            for(int j=0; j<3; j++)
            {
                cout << "il giocatore " << i+2 << "punta la carta che ritiene corretta " << endl; 
            }
        }

       //giocatore 2 e' il narratore 
       
        //tutti i gioatori pescano la nuova carta
        m.pesca(numGiocatori);
       
       cout << "ora il giocatore 2 e' narratore. " << endl;
        //stampare le carte del giocatore 
        cout << "il narratore seglie la carta che gli altri giocatori dovranno indovinare " << endl; 
        //metodo scarta da aggiungere
        cout << "ora il narratore deve dire la parola " << endl; 
        cin >> parola; 
        cout << "l'indicazione del narratore e'': " << parola << endl; 

    }while(/*condizione di fine gioco-fine tabellone*/ true);

return 0;
}