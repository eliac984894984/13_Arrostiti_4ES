#ifndef CARTA_H
#define CARTA_H

#pragma once

class Carta
{
protected: 
    vector<string> carte;
    vector<vector<string>> carteGiocatori;
    vector<string> mazzo_scarti;
public:
    void inizializza();
    void mischia();
    

};

#endif