#ifndef MAZZO_H
#define MAZZO_H
#include "Estensione.h"
#pragma once

class Mazzo_E : Estensione
{

public:
    void distribuisci_e(int numGiocatori);
    void pesca_e(int numGiocatori);
    vector<string> giocaCarte_e(int numGiocatori, int narratore, string&cartaNarratore);
    void votaCarte_e(int numGiocatori, vector<string>& tavolo, int narratore, int& p1, int& p2, int& p3, int& p4, string cartaNarratore);
    void scarta_e(vector<string>& tavolo);
    void ricarica_e();
    bool mazzo_v_e();
};

#endif