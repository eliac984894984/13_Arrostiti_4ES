#ifndef TABELLONE_H
#define TABELLONE_H

#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <string>

using namespace std;
#define Righe 8
#define Colonne 9

class Tabellone
{
private:
    int Tab[Righe][Colonne] ; // La matrice che rappresenta il tabellone
    int num;
    int num2; 

public:
    Tabellone();

    void Stampa() ; 
};

#endif