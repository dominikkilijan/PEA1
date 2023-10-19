#include "FileHandler.h"
#include <iostream>
#include <fstream>

using namespace std;

/*
* otwieranie pliku
*/
void FileHandler::openFile(string filename)
{
	cout << "Otwieranie pliku tekstowego \"" << filename << "\"\n";
}

/*
* zapisywnie do pliku "1.txt"
* N
* macierz z losowymi wartosciami 1-100. jeœli i == j to -1
*/
void FileHandler::generate(int N)
{
	cout << "Generowanie pliku tekstowego o dla " << N << " wierzcholkow\n";
	file.open("1.txt", ios::out);
	if (file.is_open())
	{
		file << "test";
	}
	else
	{
		cout << "Nie udalo sie otworzyc pliku!\n";
	}
	file.close();
}

/*
* 
*/
void FileHandler::print(string filename)
{
	cout << "Wyswietlanie zawartosci pliku \"" << filename << "\"\n";
}
