#include "../include/Carta.h"
#include "../include/Mazzo.h"
#include <iostream>
#include <string>
#include <vector>
#include <string>

using namespace std;


void Mazzo::distribuisci(int numGiocatori)
{
    carteGiocatori = vector<vector<string>>(numGiocatori);
    int turno = 0;

    for(int i=0;i<20;i++) {      //Non mi ricordo se iniziava con 5 o4 carte
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
        cout << "Giocatore " << i + 1 << ": ";
        for (int j = 0; j < carteGiocatori[i].size(); j++) {
            cout << carteGiocatori[i][j] << " ";
            cout <<endl;
        }
        cout << endl;
    } 
}

vector<string> Mazzo::giocaCarte(int numGiocatori, int narratore)
{
    vector<string> tavolo;

    cout << "Mano del narratore (Giocatore " << narratore + 1 << "): " << endl;
    for (int j = 0; j < carteGiocatori[narratore].size(); j++) 
    {
        cout << j << ": " << carteGiocatori[narratore][j] << endl;
    }
    string desc;
    cout <<"Il narratore sceglie una descrizione: ";
    cin >> desc;
    cout <<"la descrizione è: "<<desc<<endl;
    int sceltaCarta;
    cout << "Narratore, scegli l'indice della carta da giocare: ";
    cin >> sceltaCarta;

    while (sceltaCarta < 0 || sceltaCarta >= (int)carteGiocatori[narratore].size())
    {
        cout << "Scelta non valida. Riprova: ";
        cin >> sceltaCarta;
    }
    string cartaGiocata = carteGiocatori[narratore][sceltaCarta];
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


{
    vector<string> tavolo;
    for (int i = 0; i < numGiocatori; i++) {
        cout << "Mano del giocatore " << i + 1 << ": "<<endl;
        for (int j = 0; j < carteGiocatori[i].size(); j++) {
            cout << j << ": " << carteGiocatori[i][j] << endl;
        }
        int sceltaCarta;
        cout << "Giocatore " << i + 1 << ", scegli l'indice della carta da giocare: ";
        cin >> sceltaCarta;

        while (sceltaCarta < 0 || sceltaCarta >= (int)carteGiocatori[i].size()) {
            cout << "Scelta non valida. Riprova: ";
            cin >> sceltaCarta;
            }

        string cartaGiocata = carteGiocatori[i][sceltaCarta];
        tavolo.push_back(cartaGiocata);
        carteGiocatori[i].erase(carteGiocatori[i].begin() + sceltaCarta);

        cout << "Giocatore " << i + 1 << " ha giocato: " << cartaGiocata << endl;
    }
    for (int i = 0; i < tavolo.size() - 1; i++) {
        int j = rand() % (i + 1);
        swap(tavolo[i], tavolo[j]);
    }

    cout << "Carte sul tavolo:"<<endl;
    for(int i=0;i<tavolo.size() ;i++){
        cout << "- "<<tavolo[i]<<endl;
    } cout <<endl;
    return tavolo;
}

}

void Mazzo::votaCarte(int numGiocatori, vector<string>& tavolo, int narratore) {
    vector<int> voti(tavolo.size(), 0);
    for (int i = 0; i < numGiocatori; i++) {
        if (i == narratore) {
            cout << "Giocatore " << i + 1 << " è il narratore e non vota.\n";
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
    }


    cout << "Risultati votazione:" << endl;
    for (int i = 0; i < (int)tavolo.size(); ++i) {
        cout << "Carta " << i << " (" << tavolo[i] << ") ha ricevuto " << voti[i] << " voti." << endl;
    }
}


void Mazzo::scarta(vector<string>& tavolo) 
{
    for (int i = 0; i < tavolo.size(); ++i) {
        mazzo_scarti.push_back(tavolo[i]);
    }
    tavolo.clear();  // Rimuove tutte le carte dal tavolo
}