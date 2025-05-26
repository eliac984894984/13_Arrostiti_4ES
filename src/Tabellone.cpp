#include "../include/Tabellone.h"
#include <iostream>
#include <string>
using namespace std;



Tabellone::Tabellone()
{
    for(int i=0;i<Righe;i++){
        for(int j=0;j<Colonne;j++){
            Tab[i][j]=0;
        }
    }
    num=1;
    num2=30;
    for (int i=0;i<Colonne;i++) {
        Tab[i][0] = num++;      //Colonna di sinistra 1-8
    }
    for (int j=1;j<Righe;j++){
        Tab[Righe-1][j] = num++;      //Riga inferiore 8-16
    }
    for (int j=1;j<Righe;j++){
        Tab[0][j] = num2--;     //Riga superiore 30-23
    }
    for (int i=0;i<Colonne;i++){
        Tab[i][Colonne-1] = num2--;     //Colonna di sinistra 23-16
    }
}

void Tabellone::Stampa() 
{
    for(int i=0;i<Righe;i++){
        for (int j=0;j<Colonne;j++){
            if(Tab[i][j]==0){ cout <<"    ";}
            else if(Tab[i][j]<10){ cout<<"  " << Tab[i][j] << " ";}
            else { cout<<" " << Tab[i][j] << " ";}
        }
        cout <<endl;
    }
}


