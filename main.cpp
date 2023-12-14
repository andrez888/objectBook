#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy2.txt");

    //ksiazkaAdresowa.rejestracjaUzytkownika();

    ksiazkaAdresowa.wypiszWszytskichUzytkownikow();
    ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.wypiszWszytskichUzytkownikow();
    return 0;
}
