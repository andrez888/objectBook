#include "UzytkownikManager.h"

void UzytkownikManager::rejestracjaUzytkownika() {
    Uzytkownik uzytkownik = podajDaneNowegoUzytkownika();

    uzytkownicy.push_back(uzytkownik);
    plikZUzytkownikami.dopiszUzytkownikaDoPliku(uzytkownik);

    cout << endl << "Konto zalozono pomyslnie" << endl << endl;
    system("pause");
}

Uzytkownik UzytkownikManager::podajDaneNowegoUzytkownika() {
    Uzytkownik uzytkownik;

    uzytkownik.ustawId(pobierzIdNowegoUzytkownika());

    do {
        cout << "Podaj login: ";
        uzytkownik.ustawLogin(MetodyPomocnicze::wczytajLinie());
    } while (czyIstniejeLogin(uzytkownik.pobierzLogin()) == true);

    cout << "Podaj haslo: ";
    uzytkownik.ustawHaslo(MetodyPomocnicze::wczytajLinie());

    return uzytkownik;
}

int UzytkownikManager::pobierzIdNowegoUzytkownika() {
    if (uzytkownicy.empty() == true)
        return 1;
    else
        return uzytkownicy.back().pobierzId() + 1;
}

bool UzytkownikManager::czyIstniejeLogin(string login) {

    for(size_t i = 0 ; i < uzytkownicy.size() ; i++){
        if(uzytkownicy[i].pobierzLogin() == login){
            cout << "Istnieje juz taki login";
            return true;
        }
    }
    return false;
}
void UzytkownikManager::wypiszWszytskichUzytkownikow(){
    for(Uzytkownik uzytkownik : uzytkownicy){
        cout << uzytkownik.pobierzId();
        cout <<endl <<uzytkownik.pobierzLogin();
        cout << endl <<uzytkownik.pobierzHaslo() <<endl;
    }
}
void UzytkownikManager::wczytajUzytkownikowZPliku(){
   // plikZUzytkownikami.wczytajUzytkownikowZPliku(vector <Uzytkownik> &uzytkownicy);
    uzytkownicy = plikZUzytkownikami.wczytajUzytkownikowZPliku();
}
