#ifndef UZYTKOWNINMANAGER_H
#define UZYTKOWNIKMANAGER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Uzytkownik.h"
#include "plikZUzytkownikami.h"



using namespace std;
class UzytkownikManager{
    int idZalogowanegoUzytkownika;
    vector <Uzytkownik> uzytkownicy;

     Uzytkownik podajDaneNowegoUzytkownika();
     int pobierzIdNowegoUzytkownika();
     bool czyIstniejeLogin(string login);
     plikZUzytkownikami plik;
public:
     void rejestracjaUzytkownika();
    void wypiszWszytskichUzytkownikow();
};
#endif
