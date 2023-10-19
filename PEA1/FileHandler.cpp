#include "FileHandler.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*
* otwieranie pliku
*/
void FileHandler::openFile(string filename)
{
	cout << "Otwieranie pliku tekstowego \"" << filename << "\"\n";
}

/*
* zapisywnie do pliku "data1.txt"
* N
* macierz z losowymi wartosciami 1-100. je�li i == j to -1
*/
void FileHandler::generate(int N)
{
	cout << "Generowanie pliku tekstowego dla " << N << " wierzcholkow\n";
	file.open("data1.txt", ios::out);
	if (file.is_open())
	{
		file << "test";
	}
	else cout << "Nie udalo sie otworzyc pliku!\n";
	file.close();
}

/*
* 
*/
void FileHandler::print(string filename)
{
	cout << "Wyswietlanie zawartosci pliku \"" << filename << "\"\n";
	file.open(filename, ios::in);
	if (file.is_open())
	{
		string line;
		while (getline(file, line))
		{
			cout << line << "\n";
		}
	}
	else cout << "Nie udalo sie otworzyc pliku!\n";
	file.close();
}
