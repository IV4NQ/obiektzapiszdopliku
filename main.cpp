#include <iostream>
#include <fstream>

using namespace std;

const string src = "dane2.txt";

class Osoba {
public:
    string imie;
    string nazwisko;

    void wczytaj() {
        cout << "Podaj imie: ";
        cin >> this->imie;
        cout << "Podaj nazwisko: ";
        cin >> this->nazwisko;
    }

    void zapisz() {
        ofstream doPliku(src, ios::app);
        if (doPliku) {
            doPliku << this->imie << "\n";
            doPliku << this->nazwisko;
        } else {
            cout << "nie mozna zapisac do pliku";
        }
    }

    void odczyt() {
        ifstream zPliku(src);
        string lin;
        while (!zPliku.eof()) {
            getline(zPliku, lin);
            cout << lin << "\n";
        }
    }
};

int main() {
    Osoba marek;
    marek.wczytaj();
    marek.zapisz();
      marek.odczyt();
    return 0;
}



