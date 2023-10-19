#include <iostream>
#include "FileHandler.h"

using namespace std;

int choice;

int main()
{
    FileHandler fHandler;
    
    // menu wyswietlane ciagle
    while (true)
    {
        cout << "MENU:\n";
        cout << "1. Wczytaj dane z pliku\n";
        cout << "2. Wygeneruj losowe dane\n";
        cout << "3. Wyswietl dane\n";
        cout << "4. Uruchom algorytm\n";

        cin >> choice;
        system("CLS");
        switch (choice)
        {
        case 1:
            cout << "Wczytywanie danych z pliku...\n";
            fHandler.openFile("plik.txt");
            break;
        case 2:
            cout << "Generowanie danych...\n";
            fHandler.generate(5);
            break;
        case 3:
            cout << "Wyswietlanie danych...\n";
            fHandler.print("plik.txt");
            break;
        case 4:
            cout << "Uruchamianie algorytmu...\n";
            break;
        default:
            cout << "Nieprawidlowy numer!\n";
            break;
        }
    }
}