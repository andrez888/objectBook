#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika(){
    uzytkownikManager.rejestracjaUzytkownika();
}
void  KsiazkaAdresowa :: wypiszWszytskichUzytkownikow(){
    uzytkownikManager.wypiszWszytskichUzytkownikow();
}
KsiazkaAdresowa::KsiazkaAdresowa(){
    uzytkownikManager.wczytajUzytkownikowZPliku();
}


