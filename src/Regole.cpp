#include "../include/Regole.h"
#include <iostream>
using namespace std;
void Regole::mostra() {
    cout << "=== Regole del gioco ===" << endl;

    cout << "Scopo: Il gioco, che ha ricevuto molta fortuna ed è ancora oggi uno dei più famosi, "
         << "ha come scopo quello di far indovinare agli altri giocatori qual è la carta descritta dal narratore, "
         << "così da poter conquistare punti che ti permetteranno di svolgere un percorso che ti porterà alla vittoria!" << endl;

    cout << "Tabellone: Il tabellone, seppur presente in tutti i giochi da tavolo, ha un ruolo molto importante e significativo, "
         << "in quanto permette ai vari giocatori, che partiranno dalla medesima casella (numero uno), "
         << "di raggiungere la fine del percorso. Ogni giocatore è rappresentato da una pedina diversa (puoi osservare ciò nella sezione Tabellone), "
         << "per tenere traccia dei propri spostamenti fino alla fine, che corrisponde al numero 30." << endl;

    cout << "Giocatori: Nell'edizione classica di Dixit il massimo numero di giocatori è 6, ed è caldamente consigliato "
         << "rispettare il limite di età indicato, ovvero dagli 8 anni in su. "
         << "Tutto ciò può variare in base alle edizioni: Disney, Stellare, Odyssey... "
         << "Provale tutte, cosa aspetti?!" << endl;

    cout << "Punti: Ci sono diversi modi per ottenere punti. Ogni giocatore riceve 6 carte e dei segnalini voto numerati. "
         << "A turno viene scelto un narratore, che seleziona una carta dalla propria mano e la descrive in modo vago. "
         << "Gli altri giocatori scelgono una carta dalla propria mano che pensano possa corrispondere e la consegnano coperta. "
         << "Il narratore mescola tutte le carte e le mostra scoperte. Ora ogni giocatore (tranne il narratore) vota quella che ritiene corretta. "
         << "Chi indovina guadagna 3 punti. Se almeno uno ma non tutti indovinano, anche il narratore ottiene 3 punti. "
         << "Se tutti o nessuno indovina, i giocatori ottengono 2 punti e il narratore 0. "
         << "Inoltre, ogni giocatore riceve 1 punto per ogni voto ricevuto sulla propria carta. "
         << "Alla fine del turno, ogni giocatore pesca una carta per avere sempre 6 carte in mano, e il narratore passa al giocatore successivo." << endl;

    cout << "Vittoria: Vince chi per primo raggiunge i 30 punti e quindi completa il percorso sul tabellone. "
         << "Gioca e prova a vincere in questo magnifico gioco e in tutte le sue edizioni!" << endl;
}