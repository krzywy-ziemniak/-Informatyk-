#include <iostream>
 
int main() {
    const int ROZMIAR = 10;
    int tablica[ROZMIAR];
 
    std::cout << "Podaj 10 liczb calkowitych:\n";
    for (int i = 0; i < ROZMIAR; i++) {
        std::cout << "Podaj liczbe nr " << i + 1 << ": ";
        std::cin >> tablica[i];
    }
 
    int najmniejsza = tablica[0];
    for (int i = 1; i < ROZMIAR; i++) {
        if (tablica[i] < najmniejsza) {
            najmniejsza = tablica[i];
        }
    }
 
    std::cout << "Najmniejsza liczba to: " << najmniejsza << std::endl;
 
    return 0;
}
