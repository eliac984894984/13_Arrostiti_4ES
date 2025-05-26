
#include "../include/Mazzo.h"
#include <iostream>
#include <string>
#include <vector>
#include <string>

using namespace std;


void Mazzo::inizializza() {
    carte.push_back("Guscio di lumaca con un apertura sul lato.");
    carte.push_back("Paesaggio verde con una scala a chiocciola al centro.");
    carte.push_back("Ragazzo che cade da un ramo.");
    carte.push_back("Sfilata su tappeto rosso di guardie inglesi.");
    carte.push_back("Una serie di maschere appese con diverse espressioni.");
    carte.push_back("Goccie che presentano diversi paesaggi al loro interno.");
    carte.push_back("Pancake impilati con due formiche sopra.");
    carte.push_back("Due lumache che si toccano la testa.");
    carte.push_back("Oggetto bianco circondato da fiori rossi.");
    carte.push_back("Ragazza cinese con due omini sulle spalle.");
    carte.push_back("Scarpe da ballerina rosa.");
    carte.push_back("Due porte una rossa e una blu con un coniglio vestito da cavaliere.");
    carte.push_back("Spaventapasseri in un campo di girasoli.");
    carte.push_back("Ragazza su una scala in cielo e in mezzo alle colombe.");
    carte.push_back("Clessidra con una persona in entrambi i lati e con la sabbia che scende.");
    carte.push_back("Un re' che cammina in un paesaggio collinare.");
    carte.push_back("Un uomo in prigione che guarda il cielo da una finestrella.");
    carte.push_back("Un bambino su un cavallo che supera un ponte arcobaleno.");
    carte.push_back("Una pila di libri con un uomo sopra.");
    carte.push_back("Una porta che da su un cielo con nuvole.");
    carte.push_back("Giostra dei cavalli.");
    carte.push_back("Due bambini che proiettano come ombra un lupo.");
    carte.push_back("Un labirinto con un entrata e un uscita.");
    carte.push_back("Una bambina che da una rosa ad un drago blu.");
    carte.push_back("Una figura celeste dalla quale testa escono delle stelle e con delle chiavi in mano.");
    carte.push_back("Un animale bianco in una foresta morta.");
    carte.push_back("Due figure umane chiuse in una gabbia appesa, al chiaro di luna, sotto la gabbia c'e' un topolino.");
    carte.push_back("Una rosa in fiamme dentro una teca.");
    carte.push_back("Un gatto con di fronte una boccia di vetro con all'interno un pesce rosso.");
    carte.push_back("Gatto con gli stivali, con addosso un camice che dipinge un paesaggio marino.");
    carte.push_back("Un abaco con pianeti al posto delle palline");
    carte.push_back("Una testa di cervo appesa ad un muro bianco.");
    carte.push_back("Un uomo con un cappello seduto su una panchina che osserva il cielo stellato mentre legge il giornale.");
    carte.push_back("Un albero su cui rami vi sono nuvole e pianeti, al di sotto vi e' un uomo.");
    carte.push_back("Un'ancora sul fondo dell'oceano.");
    carte.push_back("Una lampadina con un mago all'interno che regge una candela.");
    carte.push_back("Un tornado generato da una mano.");
    carte.push_back("Un braccio che esce dal mare con una fiaccola in mano.");
    carte.push_back("Un insieme di uova di vario colore.");
    carte.push_back("Un gruppo di ragazzi che non sanno fare il proprio lavoro.");
}

int Mazzo::getCarteSize() {
    return carte.size();
}

void Mazzo::mischia()
{
    for (int i = 0; i < carte.size(); ++i) {
        int j = rand() % carte.size();
        swap(carte[i], carte[j]);
    }

}

void Mazzo::distribuisci(int numGiocatori)
{
    carteGiocatori = vector<vector<string>>(numGiocatori);
    int turno = 0;

    for(int i=0;i<20;i++) {      
        int giocatoreCorrente = turno % numGiocatori; 
        string cartaPescata = carte.front();
        carte.erase(carte.begin());
        carteGiocatori[giocatoreCorrente].push_back(cartaPescata);
        turno++;
    }

    cout << "Carte finali dei giocatori:"<<endl;
    for (int i = 0; i < numGiocatori; i++) {
        cout << "Giocatore " << i + 1 << ": ";
        for (int j = 0; j < carteGiocatori[i].size(); j++) {
            cout << carteGiocatori[i][j] << " ";
            cout <<endl;
        }
        cout << endl;
    }
    cout<< endl;
}

void Mazzo::pesca(int numGiocatori)
{
    int turno=0;
    string tasto; 

    for(int i=0;i<4;i++) {
        int giocatoreCorrente = turno % numGiocatori;

        string cartaPescata = carte.front();
        carte.erase(carte.begin());

        carteGiocatori[giocatoreCorrente].push_back(cartaPescata);
        cout << "Giocatore " << giocatoreCorrente + 1 << " pesca la carta: " << cartaPescata << endl;

        ++turno;
    }
    cout << "Carte finali dei giocatori:"<<endl;
    for (int i = 0; i < numGiocatori; i++) {
        cout << "per visualizzare le carte del giocatore " << i+1 << " premere un tasto casuale " << endl; 
        cin >> tasto; 
        cout << "Giocatore " << i + 1 << ": ";
        for (int j = 0; j < carteGiocatori[i].size(); j++) {
            cout << carteGiocatori[i][j] << " ";
            cout <<endl;
        }
        cout << endl;
    } 
}

vector<string> Mazzo::giocaCarte(int numGiocatori, int narratore, string&cartaNarratore)
{
    vector<string> tavolo;
    

    cout << "Mano del narratore (Giocatore " << narratore + 1 << "): " << endl;
    for (int j = 0; j < carteGiocatori[narratore].size(); j++) 
    {
        cout << j << ": " << carteGiocatori[narratore][j] << endl;
    }
    string desc;
    cout <<"Il narratore sceglie una descrizione: ";
    cin.ignore();
    getline(cin, desc);
    cout <<"la descrizione e': "<<desc<<endl;
    int sceltaCarta;
    cout << "Narratore, scegli l'indice della carta da giocare: ";
    cin >> sceltaCarta;

    while (sceltaCarta < 0 || sceltaCarta >= (int)carteGiocatori[narratore].size())
    {
        cout << "Scelta non valida. Riprova: ";
        cin >> sceltaCarta;
    }
    string cartaGiocata = carteGiocatori[narratore][sceltaCarta];
    cartaNarratore=cartaGiocata;
    tavolo.push_back(cartaGiocata);
    carteGiocatori[narratore].erase(carteGiocatori[narratore].begin() + sceltaCarta);
    cout <<endl;
    cout <<endl;

    for (int i = 0; i < numGiocatori; i++)
    {
        if (i == narratore) continue;  

        cout << "Mano del giocatore " << i + 1 << ": " << endl;
        for (int j = 0; j < carteGiocatori[i].size(); j++) 
        {
            cout << j << ": " << carteGiocatori[i][j] << endl;
        }
        cout <<endl;
        cout << "Giocatore " << i + 1 << ", scegli l'indice della carta da giocare: ";
        cin >> sceltaCarta;
        while (sceltaCarta < 0 || sceltaCarta >= (int)carteGiocatori[i].size()) 
        {
            cout << "Scelta non valida. Riprova: ";
            cin >> sceltaCarta;
        }
        string cartaGiocata = carteGiocatori[i][sceltaCarta];
        tavolo.push_back(cartaGiocata);
        carteGiocatori[i].erase(carteGiocatori[i].begin() + sceltaCarta);

        cout << "Giocatore " << i + 1 << " ha giocato: " << cartaGiocata << endl;
    }

    for (int i =0;i< (int)tavolo.size() - 1; i++)
    {
        int j = rand() % (i + 1);
        swap(tavolo[i], tavolo[j]);
    }

    cout << "Carte sul tavolo:" << endl;
    for (int i = 0; i < (int)tavolo.size(); i++) 
    {
        cout << "- " << tavolo[i] << endl;
    }
    cout << endl;
    return tavolo;

}

void Mazzo::votaCarte(int numGiocatori, vector<string>& tavolo, int narratore, int& p1, int& p2, int& p3, int& p4, string cartaNarratore ) {
    vector<int> voti(tavolo.size(), 0);
    int voto1, voto2, voto3, voto4; 

    for (int i = 0; i < numGiocatori; i++) {
        if (i == narratore) {
            cout << "Giocatore " << i + 1 << " e' il narratore e non vota.\n";
            continue; 
        }
        cout << "Giocatore " << i + 1 << ", vota una carta tra queste (inserisci l'indice): " << endl;
        for (int j = 0; j < (int)tavolo.size(); j++) {
            cout << j << ": " << tavolo[j] << endl;
        }
        int voto;
        cout << "Voto: ";
        cin >> voto;
        while (voto < 0 || voto >= (int)tavolo.size()) {
            cout << "Voto non valido, riprova: ";
            cin >> voto;
        }
        voti[voto]++;

        if(tavolo[voto]==cartaNarratore) 
        {
            cout << "il giocatore " << i + 1 << " ha indovinato!";
        }

        if(i==0) voto1=voto; 
        if(i==1) voto2=voto;
        if(i==2) voto3=voto;
        if(i==3) voto4=voto;
    }

    cout << "Risultati votazione:" << endl;
    for (int i = 0; i < (int)tavolo.size(); ++i) {
        cout << "Carta " << i << " (" << tavolo[i] << ") ha ricevuto " << voti[i] << " voti." << endl;
    }

    //gestione dei punti     
   if(narratore==0) 
   {
    if((tavolo[voto2]==cartaNarratore && tavolo[voto3]==cartaNarratore && tavolo[voto4]==cartaNarratore)|| (tavolo[voto2]!=cartaNarratore && tavolo[voto3]!=cartaNarratore && tavolo[voto4]!=cartaNarratore))
    {
        p1=p1+0; 
        p2=p2+2; 
        p3=p3+2; 
        p4=p4+2; 
    }
    else 
    {
        p1=p1+3;
        if(tavolo[voto2]==cartaNarratore)
        {
            p2=p2+3;
        }
        if(tavolo[voto3]==cartaNarratore)
        {
            p3=p3+3;
        }
        if(tavolo[voto4]==cartaNarratore)
        {
            p4=p4+3;
        }
    }
   }

   if(narratore==1) 
   {
    if((tavolo[voto1]==cartaNarratore && tavolo[voto3]==cartaNarratore && tavolo[voto4]==cartaNarratore)|| (tavolo[voto1]!=cartaNarratore && tavolo[voto3]!=cartaNarratore && tavolo[voto4]!=cartaNarratore))
    {
        p1=p1+2; 
        p2=p2+0; 
        p3=p3+2; 
        p4=p4+2;  
    }
    else 
    {
        p2=p2+3;
        if(tavolo[voto1]==cartaNarratore)
        {
            p1=p1+3;
        }
        if(tavolo[voto3]==cartaNarratore)
        {
            p3=p3+3;
        }
        if(tavolo[voto4]==cartaNarratore)
        {
            p4=p4+3;
        }
    }
    
   }
   
   if(narratore==2) 
   {
    if((tavolo[voto2]==cartaNarratore && tavolo[voto1]==cartaNarratore && tavolo[voto4]==cartaNarratore)|| (tavolo[voto2]!=cartaNarratore && tavolo[voto1]!=cartaNarratore && tavolo[voto4]!=cartaNarratore))
    {
        p1=p1+2; 
        p2=p2+2; 
        p3=p3+0; 
        p4=p4+2; 
    }
    else 
    {
        p3=p3+3;
        if(tavolo[voto2]==cartaNarratore)
        {
            p2=p2+3;
        }
        if(tavolo[voto1]==cartaNarratore)
        {
            p1=p1+3;
        }
        if(tavolo[voto4]==cartaNarratore)
        {
            p4=p4+3;
        }
    }
    }
   
   if(narratore==3) 
   {
    if((tavolo[voto2]==cartaNarratore && tavolo[voto3]==cartaNarratore && tavolo[voto1]==cartaNarratore)|| (tavolo[voto2]!=cartaNarratore && tavolo[voto3]!=cartaNarratore && tavolo[voto1]!=cartaNarratore))
    {
        p1=p1+2; 
        p2=p2+2; 
        p3=p3+2; 
        p4=p4+0; 
    }
    else 
    {
        p4=p4+3;
        if(tavolo[voto2]==cartaNarratore)
        {
            p2=p2+3;
        }
        if(tavolo[voto1]==cartaNarratore)
        {
            p1=p1+3;
        }
        if(tavolo[voto3]==cartaNarratore)
        {
            p3=p3+3;
        }
    }

   }
   cout <<"I punti, dopo questo turno di ogni giocatore sono"<<endl<<"Giocatore 1: "<<p1<<endl;
   cout <<"Giocatore 2: "<<p2<<endl;
   cout <<"Giocatore 3: "<<p3<<endl;
   cout <<"Giocatore 4: "<<p4<<endl;


}

void Mazzo::scarta(vector<string>& tavolo) 
{
    for (int i = 0; i < tavolo.size(); ++i) {
        mazzo_scarti.push_back(tavolo[i]);
    }
    tavolo.clear();  // Rimuove tutte le carte dal tavolo
}

bool Mazzo::mazzo_v() 
{
    return carte.empty();
}

void Mazzo::ricarica() {
    if (mazzo_scarti.empty()) {
        cout << "Non ci sono carte da riciclare!" << endl;
        return;
    }

    cout << "Il mazzo e' finito, Riciclo gli scarti..." << endl;

    carte = mazzo_scarti; 
    mazzo_scarti.clear(); 
    mischia();           
}
