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

    for(int i=0;i<20;i++) {       //Pesca solo le prime venti carte
        int giocatoreCorrente = turno % numGiocatori; 

        string cartaPescata = carte.front();
        carte.erase(carte.begin());

        carteGiocatori[giocatoreCorrente].push_back(cartaPescata);
        cout << "Giocatore " << giocatoreCorrente + 1 << " pesca la carta: " << cartaPescata << endl;

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

vector<string> Mazzo