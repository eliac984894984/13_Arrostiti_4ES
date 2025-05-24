#include "../include/Carta.h"
#include "../include/Mazzo.h"
#include <iostream>
#include <string>
#include <vector>
#include <string>

using namespace std;

Mazzo::Mazzo(int n) : numGiocatori(n) {}
void Mazzo::distribuisci()
{
    vector<vector<string>> carteGiocatori(numGiocatori);
    int turno = 0;

    for(int i=0;i<20;i++) {       //Pesca solo le prime venti carte
        int giocatoreCorrente = turno % numGiocatori; 

        string cartaPescata = carte.front();
        carte.erase(carte.begin());

        carteGiocatori[giocatoreCorrente].push_back(cartaPescata);
        cout << "Giocatore " << giocatoreCorrente + 1 << " pesca la carta: " << cartaPescata << endl;

        ++turno;
    }

    cout << "\nCarte finali dei giocatori:\n";
    for (int i = 0; i < numGiocatori; ++i) {
        cout << "Giocatore " << i + 1 << ": ";
        for (int j = 0; j < carteGiocatori[i].size(); ++j) {
            cout << carteGiocatori[i][j] << " ";
        }
        cout << endl;
    }
}