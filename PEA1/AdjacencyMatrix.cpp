#include "AdjacencyMatrix.h"
#include <iostream>

using namespace std;


//------------------------------------------------------------------------------------------------------------------------------------
void AdjacencyMatrix::createAdjacencyMatrix(int N)
{
	cout << "Tworzenie macierzy\n";
}
//------------------------------------------------------------------------------------------------------------------------------------

void AdjacencyMatrix::deleteAdjecencyMatrix()
{
	cout << "Usuwanie macierzy\n";
}
//------------------------------------------------------------------------------------------------------------------------------------

void AdjacencyMatrix::fillFromFile(fstream* file)
{
	if (file->is_open() == 1)
	{
		cout << "Wypelnianie macierzy dziala\n";
	}
	else 
		cout << "Nie dziala\n";
}
//------------------------------------------------------------------------------------------------------------------------------------

void AdjacencyMatrix::printAdjacencyMatrix()
{
	cout << "Wyswietlanie macierzy\n";
}
//------------------------------------------------------------------------------------------------------------------------------------

