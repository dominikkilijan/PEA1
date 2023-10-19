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
        {
            cout << "Podaj nazwe pliku do wczytania:\n";
            string filename;
            filename = "test.txt";
            //cin >> filename;

            fHandler.openFile("plik.txt");
        }
            break;
        case 2:
        {
            cout << "Ile wierzcholkow?\n";
            int N;
            N = 5;
            //cin >> N;

            fHandler.generate(N);
        }
            break;
        case 3:
        {
            cout << "Podaj nazwe pliku do wyswietlenia:\n";
            string filename;
            filename = "data1.txt";
            //cin >> filename;
            
            fHandler.print(filename);
        }
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