#include <iostream>
using namespace std;

// Funkcija koja računa zbir cifara broja
int vratiZbirCifara(int broj) {
    int zbir = 0;
    while (broj > 0) {
        zbir += broj % 10;  // Dodaj trenutnu cifru na zbir
        broj /= 10;         // Ukloni posljednju cifru
    }
    return zbir;
}

int main() {
    int n;
    cout << "Unesite prirodan broj n: ";
    cin >> n;

    int brojKoraka = 0;
    while (n >= 10) {
        n = vratiZbirCifara(n);  // Izračunaj zbir cifara
        brojKoraka++;             // Povećaj broj koraka
    }

    cout << "Broj koraka potreban da se dobije jednocifreni broj: " << brojKoraka << endl;

    return 0;
}
