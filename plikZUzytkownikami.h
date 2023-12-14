#ifndef PLIKZUZYTKOWNIKAMI_H
#define PLIKZUZYTKOWNIKAMI_H

#include <iostream>
#include <vector>
#include <fstream>

#include "uzytkownik.h"
#include "MetodyPomocnicze.h"



using namespace std;
class PlikZUzytkownikami {
    const string nazwaPlikuZUzytkownikami;

    bool czyPlikJestPusty(fstream &PlikTekstowyri);
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);
public:

    PlikZUzytkownikami(string plikZUzytkownikami) : nazwaPlikuZUzytkownikami(plikZUzytkownikami){};
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    vector <Uzytkownik> wczytajUzytkownikowZPliku();
};

#endif
