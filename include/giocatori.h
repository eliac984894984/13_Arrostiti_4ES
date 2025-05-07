#include <iostream>
#include <string>
using namespace std;

#ifndef GIOCATORI_H
#define GIOCATORI_H
#pragma once

class Giocatore
{
    ~Giocatore();
    private:
        string colore; // colore coniglio (pedina)
        string nome;
    public: 
        Giocatore( string c, string n) : colore(c), nome(n) {}
        ~Giocatore();

};

#endif