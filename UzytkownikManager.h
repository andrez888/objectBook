#ifndef UZYTKOWNINMANAGER_H
#define UZYTKOWNIKMANAGER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Uzytkownik.h"
#include "PlikZUzytkownikami.h"



using namespace std;
class UzytkownikManager{
    int idZalogowanegoUzytkownika;
    vector <Uzytkownik> uzytkownicy;
    PlikZUzytkownikami plikZUzytkownikami;

     Uzytkownik podajDaneNowegoUzytkownika();
     int pobierzIdNowegoUzytkownika();
     bool czyIstniejeLogin(string login);

public:
    UzytkownikManager(string nazwaPlikuZUzytkownikami) : plikZUzytkownikami(nazwaPlikuZUzytkownikami){};
     void rejestracjaUzytkownika();
    void wypiszWszytskichUzytkownikow();
    void wczytajUzytkownikowZPliku();
};
#endif
