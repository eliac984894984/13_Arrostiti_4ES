#ifndef CARTA_H
#define CARTA_H
#include <iostream>
#include <string>
#include <vector>
#include <string>

using namespace std;
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