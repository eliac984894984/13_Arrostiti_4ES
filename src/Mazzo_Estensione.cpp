
#include "../include/Estensione.h"
#include "../include/Mazzo_Estensione.h"
#include <iostream>
#include <string>
#include <vector>
#include <string>

using namespace std;

void Mazzo_E::distribuisci_e(int numGiocatori)
{
    carteGiocatori_e = vector<vector<string>>(numGiocatori);
    int turno = 0;

    for(int i=0;i<20;i++) {      
        int giocatoreCorrente = turno % numGiocatori; 
        string cartaPescata = cartaestesa.front();
        cartaestesa.erase(cartaestesa.begin());
        carteGiocatori_e[giocatoreCorrente].push_back(cartaPescata);
        turno++;
    }

    cout << "Carte finali dei giocatori:"<<endl;
    for (int i = 0; i < numGiocatori; i++) {
        cout << "Giocatore " << i + 1 << ": ";
        for (int j = 0; j < carteGiocatori_e[i].size(); j++) {
            cout << carteGiocatori_e[i][j] << " ";
            cout <<endl;
        }
        cout << endl;
    }
    cout<< endl;
}

void Mazzo_E::pesca_e(int numGiocatori)
{
    int turno=0;
    string tasto; 

    for(int i=0;i<4;i++) {
        int giocatoreCorrente = turno % numGiocatori;

        string cartaPescata = cartaestesa.front();
        cartaestesa.erase(cartaestesa.begin());

        carteGiocatori_e[giocatoreCorrente].push_back(cartaPescata);
        cout << "Giocatore " << giocatoreCorrente + 1 << " pesca la carta: " << cartaPescata << endl;

        ++turno;
    }
    cout << "Carte finali dei giocatori:"<<endl;
    for (int i = 0; i < numGiocatori; i++) {
        cout << "per visualizzare le carte del giocatore " << i+1 << " premere un tasto casuale " << endl; 
        cin >> tasto; 
        cout << "Giocatore " << i + 1 << ": ";
        for (int j = 0; j < carteGiocatori_e[i].size(); j++) {
            cout << carteGiocatori_e[i][j] << " ";
            cout <<endl;
        }
        cout << endl;
    } 
}

vector<string> Mazzo_E::giocaCarte_e(int numGiocatori, int narratore, string&cartaNarratore)
{
    vector<string> tavolo;
    //string cartaNarratore; devo dichiararlo ancora?

    cout << "Mano del narratore (Giocatore " << narratore + 1 << "): " << endl;
    for (int j = 0; j < carteGiocatori_e[narratore].size(); j++) 
    {
        cout << j << ": " << carteGiocatori_e[narratore][j] << endl;
    }
    string desc;
    cout <<"Il narratore sceglie una descrizione: ";
    cin >> desc;
    cout <<"la descrizione è: "<<desc<<endl;
    int sceltaCarta;
    cout << "Narratore, scegli l'indice della carta da giocare: ";
    cin >> sceltaCarta;

    while (sceltaCarta < 0 || sceltaCarta >= (int)carteGiocatori_e[narratore].size())
    {
        cout << "Scelta non valida. Riprova: ";
        cin >> sceltaCarta;
    }
    string cartaGiocata = carteGiocatori_e[narratore][sceltaCarta];
    cartaNarratore=cartaGiocata;
    tavolo.push_back(cartaGiocata);
    carteGiocatori_e[narratore].erase(carteGiocatori_e[narratore].begin() + sceltaCarta);
    cout <<endl;
    cout <<endl;

    for (int i = 0; i < numGiocatori; i++)
    {
        if (i == narratore) continue;  

        cout << "Mano del giocatore " << i + 1 << ": " << endl;
        for (int j = 0; j < carteGiocatori_e[i].size(); j++) 
        {
            cout << j << ": " << carteGiocatori_e[i][j] << endl;
        }
        cout <<endl;
        cout << "Giocatore " << i + 1 << ", scegli l'indice della carta da giocare: ";
        cin >> sceltaCarta;
        while (sceltaCarta < 0 || sceltaCarta >= (int)carteGiocatori_e[i].size()) 
        {
            cout << "Scelta non valida. Riprova: ";
            cin >> sceltaCarta;
        }
        string cartaGiocata = carteGiocatori_e[i][sceltaCarta];
        tavolo.push_back(cartaGiocata);
        carteGiocatori_e[i].erase(carteGiocatori_e[i].begin() + sceltaCarta);

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

void Mazzo_E::votaCarte_e(int numGiocatori, vector<string>& tavolo, int narratore, int& p1, int& p2, int& p3, int& p4, string cartaNarratore ) {
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

void Mazzo_E::scarta_e(vector<string>& tavolo) 
{
    for (int i = 0; i < tavolo.size(); ++i) {
        mazzo_scarti_e.push_back(tavolo[i]);
    }
    tavolo.clear();  // Rimuove tutte le carte dal tavolo
}

bool Mazzo_E::mazzo_v_e() 
{
    return cartaestesa.empty();
}

void Mazzo_E::ricarica_e() {
    if (mazzo_scarti_e.empty()) {
        cout << "Non ci sono carte da riciclare!" << endl;
        return;
    }

    cout << "Il mazzo è finito! Riciclo gli scarti..." << endl;

    cartaestesa = mazzo_scarti_e; 
    mazzo_scarti_e.clear(); 
    mischia_e();           
}