#include "AdjacencyMatrix.h"
#include <iostream>

using namespace std;


//------------------------------------------------------------------------------------------------------------------------------------
void AdjacencyMatrix::createAdjacencyMatrix(int n)
{
	N = n;
	cout << "Tworzenie macierzy z " << N << " wierzcholkami\n";

	matrix = new int* [N];
	for (int i = 0; i < N; i++)
	{
		matrix[i] = new int[N];
		for (int j = 0; j < N; j++)
		{
			matrix[i][j] = -1;
		}
	}
}
//------------------------------------------------------------------------------------------------------------------------------------

void AdjacencyMatrix::deleteAdjecencyMatrix()
{
	cout << "Usuwanie macierzy\n";
}
//------------------------------------------------------------------------------------------------------------------------------------

void AdjacencyMatrix::fillFromFile(fstream* file)
{
	if (file->is_open())
	{
		int val;
		*file >> N;
		cout << "N po \"*file >> N\" = " << N << "\n";
		createAdjacencyMatrix(4); // to do zmiany. N ma byc wczytywane z pliku. Wtedy tez mozna bedzie usunac N = n z createAdMat
		cout << "Wypelnianie macierzy dziala\n";
		printAdjacencyMatrix();
	}
	else cout << "Nie udalo sie otworzyc pliku! (w AdjancencyMatrix)\n";
}
//------------------------------------------------------------------------------------------------------------------------------------

void AdjacencyMatrix::printAdjacencyMatrix()
{
	cout << "Wyswietlanie macierzy " << N << "-elementowej\n";
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << matrix[i][j] << "\t";
		}
		cout << "\n";
	}
}
//------------------------------------------------------------------------------------------------------------------------------------

