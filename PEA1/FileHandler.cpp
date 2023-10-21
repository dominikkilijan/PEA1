#include "FileHandler.h"
#include "AdjacencyMatrix.h"
#include <iostream>
#include "AdjacencyMatrix.h"
#include <fstream>
#include <string>
#include <time.h>
#include <cstdlib>

using namespace std;


//------------------------------------------------------------------------------------------------------------------------------------
void FileHandler::openFile(string filename)
{
	cout << "Otwieranie pliku tekstowego \"" << filename << "\"\n";
	AdjacencyMatrix adMat;
	file.open(filename, ios::in);
	if (file.is_open())
		adMat.fillFromFile(&file);
	else cout << "Nie udalo sie otworzyc pliku!\n";
	file.close();
}
//------------------------------------------------------------------------------------------------------------------------------------

void FileHandler::generate(int N, string filename)
{
	file.open(filename, ios::out);
	if (file.is_open())
	{
		srand(time(NULL));
		file << N << "\n";
		for (int i = 0; i < N; i++) // linie
		{
			for (int j = 0; j < N; j++) // kolumny
			{
				if 
					(i == j) file << "-1\t";
				else
					file << rand() % 100 + 1 << "\t";
			}
			file << "\n";
		}
	}
	else cout << "Nie udalo sie otworzyc pliku!\n";
	file.close();
}
//------------------------------------------------------------------------------------------------------------------------------------

void FileHandler::print(string filename)
{
	file.open(filename, ios::in);
	if (file.is_open())
	{
		string line;
		while (getline(file, line))
			cout << line << "\n";
	}
	else cout << "Nie udalo sie otworzyc pliku!\n";
	file.close();
}
