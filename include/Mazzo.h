#ifndef MAZZO_H
#define MAZZO_H
#include "Carta.h"
#pragma once

class Mazzo : Carta
{

public:
    void distribuisci(int numGiocatori);
    void pesca(int numGiocatori);
    vector<string> giocaCarteSulTavolo(int numGiocatori);
    void votaCarteSulTavolo(int numGiocatori, vector<string>& tavolo);
    void scarta(vector<string>& tavolo);
};

#endif