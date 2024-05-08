#include <iostream>
using namespace std;

// Definicija funkcije pozdrav sa parametrom godine
void pozdrav(int godine) {
    cout << "Ime: [Vaše ime]" << endl;
    cout << "Prezime: [Vaše prezime]" << endl;
    cout << "Godine: " << godine << endl;
}

int main() {
    int mojeGodine = 25; 

    // Poziv funkcije pozdrav sa godinama kao argumentom
    pozdrav(mojeGodine);
    
    return 0;
}
