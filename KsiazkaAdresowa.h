#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "UzytkownikManager.h"

using namespace std;

class KsiazkaAdresowa{
 UzytkownikManager uzytkownikManager;
 public:
     KsiazkaAdresowa(string nazwaPlikuZUzytkownikami) : uzytkownikManager(nazwaPlikuZUzytkownikami){
        uzytkownikManager.wczytajUzytkownikowZPliku();
     };
     void rejestracjaUzytkownika();
     void wypiszWszytskichUzytkownikow();
};
#endif
