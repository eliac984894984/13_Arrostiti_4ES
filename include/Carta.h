#ifndef CARTA_H
#define CARTA_H

#pragma once

class Carta
{
protected: 
    vector<string> carte;
    vector<string> giocatori;
public:
    void inizializza();
    void mischia();
};

#endif