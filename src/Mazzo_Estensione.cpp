
#include "../include/Mazzo_Estensione.h"
#include <iostream>
#include <string>
#include <vector>
#include <string>

using namespace std;

void Mazzo_E::definisci()
{
    cartaestesa.push_back("Alice, di *Alice nel Paese delle Meraviglie*, appoggiata all'orologio del Bianconiglio. ");
    cartaestesa.push_back("Stitch, alieno con in mano una chitarra, guarda Saturno.");
    cartaestesa.push_back("Due cerbiatti, Bambi e sua mamma, abbracciati, circondati da un paesaggio naturale.");
    cartaestesa.push_back("Al centro vi è un trono dorato circondato da un'aura su cui siede Topolino; sotto al trono c'è Pluto e un altro Topolino che porge una corona al sovrano.");
    cartaestesa.push_back("I cani della *Carica dei 101* tutti ammassati; da un lato della carta sporgono le mani di Crudelia De Mon.");
    cartaestesa.push_back("I capelli di Rapunzel creano una sorta di tenda che contorna la carta; al centro vi sono delle forbici e un scia di lanterne su sfondo scuro.");
    cartaestesa.push_back("Donald Duck, mentre trascina un sacco di soldi, viene sollevato da una mano gigante che arriva dall'alto.");
    cartaestesa.push_back("Dusty, di *Planes*, che vola in un campo di mais; nel bordo inferiore ci sono delle bandiere, nella parte alta dei pop-corn.");
    cartaestesa.push_back("Lampada Pixar, dalla cui testa sporge la lampadina che illumina l'ambiente buio.");
    cartaestesa.push_back("Libro tenuto aperto da due mani umane e una zampa di Winnie the Pooh, su una pagina è raffigurato Winnie (su questa pagina è poggiata un'ape e da un barattolo cola del miele), l'altra pagina raffigura un albero.");
    cartaestesa.push_back("Mushu che tiene un pennello e dissegna il principe capovolto in metà carta, nell'altra metà un pennello disegna Mulan accerchiata da fiori rosa.");
    cartaestesa.push_back("Cappello da maga del film *Fantasia*, dal quale esce violentemente dell'acqua.");
    cartaestesa.push_back("Al centro una grande rosa sospesa; al di sotto raffigurata in piccolo Belle che ammira la rosa.");
    cartaestesa.push_back("Elasticgirl, del film -Gli incredibili-. Ha in braccio il figlio mentre con la mano sinistra afferra un cattivo.");
    cartaestesa.push_back("Ralph, di *Ralph Spaccatutto*, all'interno di un gioco tipo *Candy Crush*.");
    cartaestesa.push_back("Spirale di fiori rosa posisizionati in terra in un prato accerchiato da piante.");
    cartaestesa.push_back("Pinocchio con il naso allungato, sulla cui punta ci sono delle piante e su cui viene versata dell'acqua da un innaffiatoio.");
    cartaestesa.push_back("Vanellope, di *Ralph Spaccatutto*, con degli occhiali grandi che surfa su una freccia circondata da cuori.");
    cartaestesa.push_back("Barca dell'intro Walt Disney, che naviga in un mare di spartiti pieni di note, con alla guida Topolino.");
    cartaestesa.push_back("I gatti, degli *Aristogatti*, che ballano sulle note che escono da una tromba.");
    cartaestesa.push_back("Bolt, del film -Bolt-, seduto ad un tavolo che ammira una bistecca, sullo sfondo è presente la gatta, Mittens.");
    cartaestesa.push_back("Cars pronto alla partenza di una gara in un circuito insieme ad altre macchine.");
    cartaestesa.push_back("Coppa, del film *Cars*, che fluttua nel cielo; nel lato inferiore della carta un deserto tracciato da segni di gomme d'auto.");
    cartaestesa.push_back("Carta divisa a metà verticalmente: nella prima metà una savana in degrado, nella seconda metà la savana è popolata e fertile; nel cielo è presente il volto del Re Leone.");
    cartaestesa.push_back("Pluto su una barca con in mano una canna da pesca. In alto risplende una palla da discoteca e sullo sfondo, in trasparenza, ci sono delle figure che ballano.");
    cartaestesa.push_back("Donald Duck vestito da esploratore con in mano una torcia, si trova dentro una tomba e alle sue spalle si trova la porta di un caveau.");
    cartaestesa.push_back("Dumbo che vola con delle cicogne al tramonro. Con laproboscide tiene un fagotto con all'interno una piuma.");
    cartaestesa.push_back("Ruota d'oro di una carozza appoggiata nelle foglie di zucca, al di sopra vi sono i topolini di Cenerentola che sorreggono la scarpetta di cristallo.");
    cartaestesa.push_back("Albero in una radura su cui è afflitto un volatintino con scritto: -Ricercato Flin Rider-.");
    cartaestesa.push_back("Anna ed Elsa, di *Frozen*, a cavallo che galoppano in un'atmosfera glaciale.");
    cartaestesa.push_back("Baymax, di *Big Hero 6*, sorregge una cassetta del pronto soccorso; è di fronte a Yokai, alle cui spalle c'è una figura costituita da microrobot. I due si trovano in un luogo buio illuminato da lanterne viola.");
    cartaestesa.push_back("Un pinguino con un papillon sorregge un vassoio sopra la testa, sul quale vi è un bicchiere di ghiaccio con un ombrellino da cocktail.");
    cartaestesa.push_back("Una volpe e un cane, arrivando da lati opposti, seguono delle orme in un prato e si incontrano.");
    cartaestesa.push_back("Buz, di *Toy Story*, che vola nello spazio.");
    cartaestesa.push_back("Chitarra bianca, del film *Coco*, appoggiata su un tappeto di fiori, dalla quale esce un bagliore e dei petali.");
    cartaestesa.push_back("Tavolo, in una casa sfarzosa con un camino acceso, sul quale è presente un piatto di spaghetti conditi con polpette, due spaghetti formano un cuore.");
    cartaestesa.push_back("Mike Wazowski, di *Monsters & Co.*, circondato da pile di libri, consulta un libro.");
    cartaestesa.push_back("Boo, di *Monsters & Co.*, seduta sul letto che guarda Mike e Sulley sopra di lei.");
    cartaestesa.push_back("Aurora, di *La Bella Addormentata nel Bosco*, si aggira nella foresta; ci sono due alberi legati da un filo. Su questo filo sono poggiati degli uccelli.");
    cartaestesa.push_back("Mela avvelelenata di Biancaneve appoggiata sul tronco di un albero tagliato; con al di sopra una mano stregata che sta per afferarla. ");
    cartaestesa.push_back("Due mani di uno scimpanzè che fanno da cornicve ad un fuoco in lontananza.");
}

void Mazzo_E::mischia_e() 
{
    for (int i = 0; i < cartaestesa.size(); ++i) {
        int j = rand() % cartaestesa.size();
        swap(cartaestesa[i], cartaestesa[j]);
    }
}

void Mazzo_E::distribuisci_e(int numGiocatori)
{
    carteGiocatori_e = vector<vector<string>>(numGiocatori);
    int turno = 0;

    for(int i=0;i<20;i++) {      
        int giocatoreCorrente = turno % numGiocatori; 
        string cartaPescata = cartaestesa.front();
        cartaestesa.erase(cartaestesa.begin());
        carteGiocatori_e[giocatoreCorrente].push_back(cartaPescata);
        turno++;
    }

    cout << "Carte finali dei giocatori:"<<endl;
    for (int i = 0; i < numGiocatori; i++) {
        cout << "Giocatore " << i + 1 << ": ";
        for (int j = 0; j < carteGiocatori_e[i].size(); j++) {
            cout << carteGiocatori_e[i][j] << " ";
            cout <<endl;
        }
        cout << endl;
    }
    cout<< endl;
}

void Mazzo_E::pesca_e(int numGiocatori)
{
    int turno=0;
    string tasto; 

    for(int i=0;i<4;i++) {
        int giocatoreCorrente = turno % numGiocatori;

        string cartaPescata = cartaestesa.front();
        cartaestesa.erase(cartaestesa.begin());

        carteGiocatori_e[giocatoreCorrente].push_back(cartaPescata);
        cout << "Giocatore " << giocatoreCorrente + 1 << " pesca la carta: " << cartaPescata << endl;

        ++turno;
    }
    cout << "Carte finali dei giocatori:"<<endl;
    for (int i = 0; i < numGiocatori; i++) {
        cout << "per visualizzare le carte del giocatore " << i+1 << " premere un tasto casuale " << endl; 
        cin >> tasto; 
        cout << "Giocatore " << i + 1 << ": ";
        for (int j = 0; j < carteGiocatori_e[i].size(); j++) {
            cout << carteGiocatori_e[i][j] << " ";
            cout <<endl;
        }
        cout << endl;
    } 
}

vector<string> Mazzo_E::giocaCarte_e(int numGiocatori, int narratore, string&cartaNarratore)
{
    vector<string> tavolo;
    

    cout << "Mano del narratore (Giocatore " << narratore + 1 << "): " << endl;
    for (int j = 0; j < carteGiocatori_e[narratore].size(); j++) 
    {
        cout << j << ": " << carteGiocatori_e[narratore][j] << endl;
    }
    string desc;
    cout <<"Il narratore sceglie una descrizione: ";
    cin.ignore();
    getline(cin, desc);
    cout <<"la descrizione è: "<<desc<<endl;
    int sceltaCarta;
    cout << "Narratore, scegli l'indice della carta da giocare: ";
    cin >> sceltaCarta;

    while (sceltaCarta < 0 || sceltaCarta >= (int)carteGiocatori_e[narratore].size())
    {
        cout << "Scelta non valida. Riprova: ";
        cin >> sceltaCarta;
    }
    string cartaGiocata = carteGiocatori_e[narratore][sceltaCarta];
    cartaNarratore=cartaGiocata;
    tavolo.push_back(cartaGiocata);
    carteGiocatori_e[narratore].erase(carteGiocatori_e[narratore].begin() + sceltaCarta);
    cout <<endl;
    cout <<endl;

    for (int i = 0; i < numGiocatori; i++)
    {
        if (i == narratore) continue;  

        cout << "Mano del giocatore " << i + 1 << ": " << endl;
        for (int j = 0; j < carteGiocatori_e[i].size(); j++) 
        {
            cout << j << ": " << carteGiocatori_e[i][j] << endl;
        }
        cout <<endl;
        cout << "Giocatore " << i + 1 << ", scegli l'indice della carta da giocare: ";
        cin >> sceltaCarta;
        while (sceltaCarta < 0 || sceltaCarta >= (int)carteGiocatori_e[i].size()) 
        {
            cout << "Scelta non valida. Riprova: ";
            cin >> sceltaCarta;
        }
        string cartaGiocata = carteGiocatori_e[i][sceltaCarta];
        tavolo.push_back(cartaGiocata);
        carteGiocatori_e[i].erase(carteGiocatori_e[i].begin() + sceltaCarta);

        cout << "Giocatore " << i + 1 << " ha giocato: " << cartaGiocata << endl;
    }

    for (int i =0;i< (int)tavolo.size() - 1; i++)
    {
        int j = rand() % (i + 1);
        swap(tavolo[i], tavolo[j]);
    }

    cout << "Carte sul tavolo:" << endl;
    for (int i = 0; i < (int)tavolo.size(); i++) 
    {
        cout << "- " << tavolo[i] << endl;
    }
    cout << endl;
    return tavolo;

}

void Mazzo_E::votaCarte_e(int numGiocatori, vector<string>& tavolo, int narratore, int& p1, int& p2, int& p3, int& p4, string cartaNarratore ) {
    vector<int> voti(tavolo.size(), 0);
    int voto1, voto2, voto3, voto4;

    for (int i = 0; i < numGiocatori; i++) {
        if (i == narratore) {
            cout << "Giocatore " << i + 1 << " è il narratore e non vota.\n";
            continue; 
        }
        cout << "Giocatore " << i + 1 << ", vota una carta tra queste (inserisci l'indice): " << endl;
        for (int j = 0; j < (int)tavolo.size(); j++) {
            cout << j << ": " << tavolo[j] << endl;
        }
        int voto;
        cout << "Voto: ";
        cin >> voto;
        while (voto < 0 || voto >= (int)tavolo.size()) {
            cout << "Voto non valido, riprova: ";
            cin >> voto;
        }
        voti[voto]++;

        if(tavolo[voto]==cartaNarratore) 
        {
            cout << "il giocatore " << i + 1 << " ha indovinato!";
        }

        if(i==0) voto1=voto; 
        if(i==1) voto2=voto;
        if(i==2) voto3=voto;
        if(i==3) voto4=voto;

    }

    cout << "Risultati votazione:" << endl;
    for (int i = 0; i < (int)tavolo.size(); ++i) {
        cout << "Carta " << i << " (" << tavolo[i] << ") ha ricevuto " << voti[i] << " voti." << endl;
    }

     //gestione dei punti     
   if(narratore==0) 
   {
    if((tavolo[voto2]==cartaNarratore && tavolo[voto3]==cartaNarratore && tavolo[voto4]==cartaNarratore)|| (tavolo[voto2]!=cartaNarratore && tavolo[voto3]!=cartaNarratore && tavolo[voto4]!=cartaNarratore))
    {
        p1=p1+0; 
        p2=p2+2; 
        p3=p3+2; 
        p4=p4+2; 
    }
    else 
    {
        p1=p1+3;
        if(tavolo[voto2]==cartaNarratore)
        {
            p2=p2+3;
        }
        if(tavolo[voto3]==cartaNarratore)
        {
            p3=p3+3;
        }
        if(tavolo[voto4]==cartaNarratore)
        {
            p4=p4+3;
        }
    }
   }

   if(narratore==1) 
   {
    if((tavolo[voto1]==cartaNarratore && tavolo[voto3]==cartaNarratore && tavolo[voto4]==cartaNarratore)|| (tavolo[voto1]!=cartaNarratore && tavolo[voto3]!=cartaNarratore && tavolo[voto4]!=cartaNarratore))
    {
        p1=p1+2; 
        p2=p2+0; 
        p3=p3+2; 
        p4=p4+2;  
    }
    else 
    {
        p2=p2+3;
        if(tavolo[voto1]==cartaNarratore)
        {
            p1=p1+3;
        }
        if(tavolo[voto3]==cartaNarratore)
        {
            p3=p3+3;
        }
        if(tavolo[voto4]==cartaNarratore)
        {
            p4=p4+3;
        }
    }
    
   }
   
   if(narratore==2) 
   {
    if((tavolo[voto2]==cartaNarratore && tavolo[voto1]==cartaNarratore && tavolo[voto4]==cartaNarratore)|| (tavolo[voto2]!=cartaNarratore && tavolo[voto1]!=cartaNarratore && tavolo[voto4]!=cartaNarratore))
    {
        p1=p1+2; 
        p2=p2+2; 
        p3=p3+0; 
        p4=p4+2; 
    }
    else 
    {
        p3=p3+3;
        if(tavolo[voto2]==cartaNarratore)
        {
            p2=p2+3;
        }
        if(tavolo[voto1]==cartaNarratore)
        {
            p1=p1+3;
        }
        if(tavolo[voto4]==cartaNarratore)
        {
            p4=p4+3;
        }
    }
    }
   
   if(narratore==3) 
   {
    if((tavolo[voto2]==cartaNarratore && tavolo[voto3]==cartaNarratore && tavolo[voto1]==cartaNarratore)|| (tavolo[voto2]!=cartaNarratore && tavolo[voto3]!=cartaNarratore && tavolo[voto1]!=cartaNarratore))
    {
        p1=p1+2; 
        p2=p2+2; 
        p3=p3+2; 
        p4=p4+0; 
    }
    else 
    {
        p4=p4+3;
        if(tavolo[voto2]==cartaNarratore)
        {
            p2=p2+3;
        }
        if(tavolo[voto1]==cartaNarratore)
        {
            p1=p1+3;
        }
        if(tavolo[voto3]==cartaNarratore)
        {
            p3=p3+3;
        }
    }

   }
   cout <<"I punti, dopo questo turno di ogni giocatore sono"<<endl<<"Giocatore 1: "<<p1<<endl;
   cout <<"Giocatore 2: "<<p2<<endl;
   cout <<"Giocatore 3: "<<p3<<endl;
   cout <<"Giocatore 4: "<<p4<<endl;

}

void Mazzo_E::scarta_e(vector<string>& tavolo) 
{
    for (int i = 0; i < tavolo.size(); ++i) {
        mazzo_scarti_e.push_back(tavolo[i]);
    }
    tavolo.clear();  // Rimuove tutte le carte dal tavolo
}

bool Mazzo_E::mazzo_v_e() 
{
    return cartaestesa.empty();
}

void Mazzo_E::ricarica_e() {
    if (mazzo_scarti_e.empty()) {
        cout << "Non ci sono carte da riciclare!" << endl;
        return;
    }

    cout << "Il mazzo è finito! Riciclo gli scarti..." << endl;

    cartaestesa = mazzo_scarti_e; 
    mazzo_scarti_e.clear(); 
    mischia_e();           
}