#ifndef TABELLONE_H
#define TABELLONE_H

#pragma once

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
    ~Tabellone();
    void Stampa() ; 
};

#endif