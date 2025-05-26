#ifndef MAZZO_E_H
#define MAZZO_E_H
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <string>

using namespace std;
class Mazzo_E 
{
protected:
    vector<string> cartaestesa;
    vector<vector<string>> carteGiocatori_e;
    vector<string> mazzo_scarti_e;
public:
    void definisci();
    void mischia_e();
    void distribuisci_e(int numGiocatori);
    void pesca_e(int numGiocatori);
    vector<string> giocaCarte_e(int numGiocatori, int narratore, string&cartaNarratore);
    void votaCarte_e(int numGiocatori, vector<string>& tavolo, int narratore, int& p1, int& p2, int& p3, int& p4, string cartaNarratore);
    void scarta_e(vector<string>& tavolo);
    void ricarica_e();
    bool mazzo_v_e();
};

#endif