#ifndef GIOCATORE_H
#define GIOCATORE_H

#pragma once

class Giocatore
{
protected:
    string nome;
    string colore;

public:
    Giocatore(string n, string c);
    //metodi
    void controlloPedine();
    string getColore();
    
};

#endif