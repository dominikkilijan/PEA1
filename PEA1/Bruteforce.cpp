#include "Bruteforce.h"
#include "AdjacencyMatrix.h"
#include <iostream>
#include <algorithm>

using namespace std;

//------------------------------------------------------------------------------------------------------------------------------------
Bruteforce::Bruteforce(int n, int** m)
{
	cout << "Bruteforce konstruktor\n";
	N = n;
	matrix = m;
	permutations = factorials[N];
	vertices = new int [N];
	for (int i = 0; i < N; i++)
	{
		vertices[i] = i;
	}
}
//------------------------------------------------------------------------------------------------------------------------------------
void Bruteforce::TSPBrute()
{
	currentPath = new int[N];
	bestPath = new int[N];
	do {
		int currentSum = 0;

		for (int i = 0; i < N; i++)
		{
			currentSum += matrix[vertices[i]][vertices[(i + 1) % N]];
			if (bestSum > currentSum) // dla bestSum<sum to nie ma sensu liczyc bo i tak bedzie gorzej
			{
				currentPath[i] = vertices[i];
			}
		}
		if (bestSum > currentSum)
		{
			bestSum = currentSum;
			for (int i = 0; i < N; i++)
			{
				bestPath[i] = currentPath[i];
			}
		}
	} while (std::next_permutation(vertices, vertices + N));
	cout << "bestSum = " << bestSum << "\nbestPath: ";
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


}
//------------------------------------------------------------------------------------------------------------------------------------

//------------------------------------------------------------------------------------------------------------------------------------
/*
do {
	for (int i = 0; i < N; i++)
	{
		cout << vertices[i] << "  ";
	}
	cout << "\n";
} while (std::next_permutation(vertices, vertices + N));
*/