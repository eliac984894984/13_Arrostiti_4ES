#include "../include/Regole.h"
#include <iostream>
using namespace std;
void Regole::mostra() {
    cout << "=== Regole del gioco ===" << endl;

    cout << "Lo scopo e' quello di far indovinare agli altri giocatori qual'e' la carta descritta dal narratore,"
         << "cosi' da poter conquistare punti che ti permetteranno di avanzare nel tabellone e VINCERE!" << endl;

    cout << "Il tabellone presenta 30 caselle e ogni giocatore ha lo scopo di raggiungere l'ultima per primo. "
         << "Ogni giocatore e' rappresentato da una pedina diversa, per tenere traccia della cassella in cui si trova nel tabellone. " << endl;

    cout << "Il numero di giocatori e' 4, per giocare in modo piu' dinamico si consiglia che abbiano più di 8 anni. "
         << "Vi sono varie estensioni che aggiungono carte o regole al gioco oppure edizioni come: Disney, Stellare, Odyssey... "<< endl;

    cout << "Per quanto riguarda i punti ci sono diversi modi per ottenerli. Ogni giocatore riceve 5 carte e dei segnalini voto numerati. "
         << "A turno viene scelto un narratore, che seleziona una carta tra quelle che possiede e la descrive in modo vago,"
         << "da questa descrizione gli altri giocatori devono consegnare, in modo coperto, al narratore una delle loro carte che corrisponda il piu' possibile alla descrizione fornita."
         << "Il narratore mescola tutte le carte e le mostra scoperte. Ora ogni giocatore (tranne il narratore) vota quella che ritiene corretta. "
         << "Chi indovina guadagna 3 punti. Se almeno uno ma non tutti indovinano, anche il narratore ottiene 3 punti. "
         << "Se tutti o nessuno indovina, i giocatori ottengono 2 punti e il narratore 0. "
         << "Alla fine del turno, ogni giocatore pesca una carta per tornare ad avere 5 carte in mano, e il ruolo del narratore passa al giocatore successivo." << endl;

    cout << "Gioca e prova a vincere in questo magnifico gioco e in tutte le sue edizioni!" << endl;
}