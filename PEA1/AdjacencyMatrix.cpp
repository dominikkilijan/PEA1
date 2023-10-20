#include "AdjacencyMatrix.h"
#include "Bruteforce.h"
#include <iostream>

using namespace std;


//------------------------------------------------------------------------------------------------------------------------------------
AdjacencyMatrix::~AdjacencyMatrix()
{
	cout << "Destruktor AdjacencyMatrix\n";
	deleteAdjacencyMatrix();
}
//------------------------------------------------------------------------------------------------------------------------------------
void AdjacencyMatrix::createAdjacencyMatrix()
{
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

void AdjacencyMatrix::deleteAdjacencyMatrix()
{
	cout << "Usuwanie macierzy\n";
	if (matrix != nullptr)
	{
		for (int i = 0; i < N; i++)
		{
			delete[] matrix[i];
		}
		delete[] matrix;
		matrix = nullptr;
	}
}
//------------------------------------------------------------------------------------------------------------------------------------

void AdjacencyMatrix::fillFromFile(fstream* file)
{
	if (file->is_open())
	{
		int val;
		*file >> N;

		createAdjacencyMatrix();

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				*file >> val;
				matrix[i][j] = val;
			}
		}
		printAdjacencyMatrix();
		Bruteforce brute(N, matrix);
		brute.TSPBrute();
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

