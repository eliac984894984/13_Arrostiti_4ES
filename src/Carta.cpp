#include "../include/Carta.h"


void Carta::inizializza() {
    carte.push_back("Guscio di lumaca con un apertura sul lato.");
    carte.push_back("Paesaggio verde con una scala a chiocciola al centro.");
    carte.push_back("Ragazzo che cade da un ramo.");
    carte.push_back("Sfilata su tappeto rosso di guardie inglesi.");
    carte.push_back("Sole che illumina un paesaggio variegato di colori.");
    carte.push_back("Una serie di maschere appese con diverse espressioni.");
    carte.push_back("Goccie che presentano diversi paesaggi al loro interno.");
    carte.push_back("Pancake impilati con due formiche sopra.");
    carte.push_back("Due lumache che si toccano la testa.");
    carte.push_back("Oggetto bianco circondato da fiori rossi.");
    carte.push_back("Ragazza cinese con due omini sulle spalle.");
    carte.push_back("Scarpe da ballerina rosa.");
    carte.push_back("Due porte una rossa e una blu con un coniglio vestito da cavliere.");
    carte.push_back("Spaventa passeri in un campo di girasoli.");
    carte.push_back("Ragazza su una scala in cielo e in mezzo alle colombe.");
    carte.push_back("Clessidra con una persona in entrambi i lati e con la sabbia che scende.");
    carte.push_back("Un rè che cammina in un paesaggio collinare.");
    carte.push_back("Un uomo in prigione che guarda il cielo da una finestrella.");
    carte.push_back("Un bambino su un cavallo che supera un ponte arcobaleno.");
    carte.push_back("Una pila di libri con un uomo sopra.");
    carte.push_back("Una porta che da su un cielo con nuvole.");
    carte.push_back("Giostra dei cavalli.");
    carte.push_back("Due bambini che proiettano come ombra un lupo.");
    carte.push_back("Un labirinto con un entrata e un uscita.");
    carte.push_back("Una bambina che da una rosa ad un drago blu.");
    carte.push_back("Una figura celeste dalla quale testa escono delle stelle e con delle chiavi in mano.");
    carte.push_back("Un animale bianco in una foresta morta.");
    carte.push_back("Due figure umane chiuse in una gabbia appesa, al chiaro di luna, sotto la gabbia c'è un topolino.");
    carte.push_back("Una rosa in fiamme dentro una teca.");
    carte.push_back("Un gatto con di fronte una boccia di vetro con all'interno un pesce rosso.");
    carte.push_back("Gatto con gli stivali, con addosso un camice che dipinge un paesaggio marino.");
    carte.push_back("Un abaco con pianeti al posto delle palline");
    carte.push_back("Una testa di cervo appesa ad un muro bianco.");
    carte.push_back("Un uomo con un cappello seduto su una panchina che osserva il cielo stellato mentre legge il giornale.");
    carte.push_back("Un albero su cui rami vi sono nuvele e pianeti, al di sotto vi è un uomo.");
    carte.push_back("Un'ancora sul fondo dell'oceano.");
    carte.push_back("Una lampadina con un mago all'interno che regge una candela.");
    carte.push_back("Un tornado generato da una mano.");
    carte.push_back("Un braccio che esce dal mare con una fiaccola in mano.");
    carte.push_back("Un insieme di uova di vario colore.");
    carte.push_back("Un gruppo di ragazzi che non sanno fare il proprio lavoro.");
}

void Carta::mischia()
{
    for (int i = 0; i < carte.size(); ++i) {
        int j = rand() % carte.size();
        swap(carte[i], carte[j]);
    }

}