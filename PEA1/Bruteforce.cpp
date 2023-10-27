#include "Bruteforce.h"
#include "AdjacencyMatrix.h"
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <Windows.h>
#include <time.h>

using namespace std;

//------------------------------------------------------------------------------------------------------------------------------------
Bruteforce::Bruteforce(int n, int** m)
{
	N = n;
	matrix = m;
	vertices = new int [N];
	for (int i = 0; i < N; i++)
		vertices[i] = i;
}
//------------------------------------------------------------------------------------------------------------------------------------
long double Bruteforce::TSPBrute()
{
	currentPath = new int[N];
	bestPath = new int[N];

	long long int frequency, start, elapsed; // zmienne zwiazane z pomiarem czasu
	QueryPerformanceFrequency((LARGE_INTEGER*)&frequency);
	start = read_QPC(); // rozpoczecie pomiaru czasu
	
	do {
		int currentSum = 0; // zmienna do zliczania aktualnej dlugosci testowanej sciezki

		for (int i = 0; i < N; i++)
		{
			currentSum += matrix[vertices[i]][vertices[(i + 1) % N]]; // dwa kolejne wierzcholki permutacji. W sytuacji granicznej, ostatni wierzcholek i punkt poczatkowy
			if (bestSum < currentSum) // jeœli bestSum<sum to nie ma sensu liczyc bo i tak bedzie gorzej
			{
				break;
			}
		}
		if (bestSum > currentSum) // jesli znaleziona zostala lepsza sciezka
		{
			bestSum = currentSum;
			for (int i = 0; i < N; i++)
			{
				bestPath[i] = vertices[i];
			}
		}
	} while (std::next_permutation(vertices, vertices + N));
	
	elapsed = read_QPC() - start; // koniec pomiaru czasu
	long double timeElapsed;
	timeElapsed = ((1000.0 * elapsed) / frequency);
	
	cout << "bestSum = " << bestSum << "\nbestPath: ";
	// wyswietlenie najoptymalniejszej sciezki
	for (int i = 0; i < N; i++)
	{
		cout << bestPath[i] << " -> ";
	}
	cout << bestPath[0] << "\n";

	// czyszczenie
	delete[] bestPath;
	delete[] currentPath;
	bestPath = nullptr;
	currentPath = nullptr;

	return timeElapsed;
}
//------------------------------------------------------------------------------------------------------------------------------------
// metoda do precyzyjnego pomiaru czasu
long long int Bruteforce::read_QPC()
{
	LARGE_INTEGER count;
	QueryPerformanceCounter(&count);
	return((long long int)count.QuadPart);
}
//------------------------------------------------------------------------------------------------------------------------------------
