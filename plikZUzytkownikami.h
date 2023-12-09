#ifndef PLIKZUZYTKOWNIKAMI_H
#define PLIKZUZYTKOWNIKAMI_H

#include <iostream>
#include <vector>
#include <fstream>

#include "uzytkownik.h"
#include "MetodyPomocnicze.h"

using namespace std;
class plikZUzytkownikami {

    string nazwaPlikuZUzytkownikami;
    bool czyPlikJestPusty(fstream &plikTekstowy);
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
public:
    plikZUzytkownikami();
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
};

#endif
