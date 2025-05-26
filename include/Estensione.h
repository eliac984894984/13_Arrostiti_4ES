#ifndef ESTENSIONE_H
#define ESTENSIONE_H

#pragma once
#include <vector>
#include <string>
using namespace std;



class Estensione
{
protected:
    vector<string> cartaestesa;
    vector<vector<string>> carteGiocatori_e;
    vector<string> mazzo_scarti_e;
public:
   void definisci();
   void mischia_e();

};

#endif