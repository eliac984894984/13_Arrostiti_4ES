#ifndef MAZZO_H
#define MAZZO_H
#include "Carta.h"
#pragma once

class Mazzo : Carta
{

public:
    void distribuisci(int numGiocatori);
    void pesca(int numGiocatori);
    vector<string> giocaCarte(int numGiocatori, int narratore, string&cartaNarratore);
    void votaCarte(int numGiocatori, vector<string>& tavolo, int narratore, int& p1, int& p2, int& p3, int& p4, string cartaNarratore);
    void scarta(vector<string>& tavolo);
    void ricarica();
    bool mazzo_v();
};

#endif