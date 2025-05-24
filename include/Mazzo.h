#ifndef MAZZO_H
#define MAZZO_H
#include "Carta.h"
#pragma once

class Mazzo : Carta
{
protected:
    int numGiocatori;
public:
    Mazzo(int n);
    void distribuisci(); //Da ridefinire

};

#endif