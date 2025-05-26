#include "include/Giocatore.h"
#include "include/Tabellone.h"
#include "include/Regole.h"
#include "include/Carta.h"
#include "include/Mazzo.h"
#include "include/Estensione.h"

#include <iostream>
#include <string>

using namespace std;


int main(){
    
    string nomeGiocatore, colore1, colore2, colore3, colore4, cartaNarratore;
    int scelta, narratore=0, punti1=0, punti2=0, punti3=0, punti4=0;
    int numGiocatori=4; 
    vector<string> carte_tavolo;

    Carta c; //creazione dell'oggetto carta 
    c.inizializza(); //metodo per inizializzare tutte le carte 
    Mazzo m; //creazione dell'oggetto mazzo 
    Regole r; //creazione dell'oggetto regole 
    r.mostra(); //metodo per mostrare le regole
    

    cout <<endl;
    cout << "i colori delle pedine disponibili sono blu, rosso, giallo e verde. Non è possibile per due giocatori scegliere la stessa pedina. " << endl;

    //primo giocatore
    cout << "inserici il nome e colore della pedina del primo giocatore: " << endl ;
    cin >> nomeGiocatore;
    cin >> colore1;
    Giocatore Giocatore1(nomeGiocatore, colore1);
    Giocatore1.controlloPedine(); //meccanismo per controllare che il colore sia valido

    //secondo giocatore
    cout << "inserici il nome e colore della pedina del secondo giocatore: " << endl ;
    cin >> nomeGiocatore;
    do {
        cin >> colore2;
        if (Giocatore1.getColore()==colore2) //meccanismo per controllare che non sia stato lo stesso colore
        {
            cout << "non possono essere scelte le pedine di uno stesso colore, inserire il nuovo colore: " << endl;
        }
    } while(Giocatore1.getColore()==colore2);
    Giocatore Giocatore2(nomeGiocatore, colore2);
    Giocatore2.controlloPedine(); //meccanismo per controllare che il colore sia valido
    
    //terzo giocatore
    cout << "inserici il nome e colore della pedina del secondo giocatore: " << endl ;
    cin >> nomeGiocatore;
    do {
        cin >> colore3;
        if (Giocatore1.getColore()==colore3 || Giocatore2.getColore()==colore3) //meccanismoper controllare che non sia stato lo stesso colore
        {
        cout << "non possono essere scelte le pedine di uno stesso colore, inserire il nuovo colore: " << endl;
        }
    } while(Giocatore1.getColore()==colore3 || Giocatore2.getColore()==colore3);
    Giocatore Giocatore3(nomeGiocatore, colore3);
    Giocatore3.controlloPedine(); //meccanismo per controllare che il colore sia valido

    //quarto giocatore
    cout << "inserici il nome e colore della pedina del secondo giocatore: " << endl ;
    cin >> nomeGiocatore;
    do {
        cin >> colore4;
        if (Giocatore1.getColore()==colore4 || Giocatore2.getColore()==colore4 || Giocatore3.getColore()==colore4) //meccanismo per controllare che non sia stato lo stesso colore
        {
            cout << "non possono essere scelte le pedine di uno stesso colore, inserire il nuovo colore: " << endl;
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

    //scelta del gioco di base
    if (scelta==1) {
        //attribuzione delle prime 5 carte ai giocatori 
        m.distribuisci(numGiocatori);

        do{
        //inizio effettivo del gioco     
        for(int i=0; i<numGiocatori; i++)
        {
            if(m.mazzo_v()) { //meccanismo per controllare se il mazzo generale finisce 
                m.ricarica();
            }

            cout << "il narratore e' il giocatore: " << narratore + 1 << endl; 
       
            carte_tavolo= m.giocaCarte(numGiocatori, narratore, cartaNarratore); //il narratore sceglie la sua carta e tutti i giocatori giocano la loro carta
            m.votaCarte(numGiocatori, carte_tavolo, i, punti1, punti2, punti3, punti4, cartaNarratore); //i giocatori votano la presunta carta corretta
            m.scarta(carte_tavolo); //le carte sul tavolo vengono scartate e messe nel mazzo degli scarti
            m.pesca(numGiocatori); //la nuova carta viene pescata 
            narratore++; //il narratore cambia e diventa il giocatore successivo 
        }
        }while(punti1<=30 && punti2<=30 && punti3<=30 && punti4<=30 );

        if(punti1>=30) 
        {
            cout << "il giocatore 1 ha vinto! " << endl; 
        }
        if(punti2>=30)
        {
            cout<<"il giocatore 2 ha vinto! " << endl; 
        }
        if(punti3>=30)
        {
            cout<<"il giocatore 3 ha vinto! " << endl; 
        }
        if(punti4>=30)
        {
            cout<<"il giocatore 4 ha vinto! " << endl; 
        }
    }

    //scelta del gioco con le estensioni 
    if(scelta==2) 
    {
        //rifare la stessa cosa ma con i metodi dell'estensione 
        if(punti1>=30) 
        {
            cout << "il giocatore 1 ha vinto! " << endl; 
        }
        if(punti2>=30)
        {
            cout<<"il giocatore 2 ha vinto! " << endl; 
        }
        if(punti3>=30)
        {
            cout<<"il giocatore 3 ha vinto! " << endl; 
        }
        if(punti4>=30)
        {
            cout<<"il giocatore 4 ha vinto! " << endl; 
        }
    }


return 0;
}