#include "Bruteforce.h"
#include "AdjacencyMatrix.h"
#include <iostream>
#include <algorithm>

using namespace std;

//------------------------------------------------------------------------------------------------------------------------------------
Bruteforce::Bruteforce(int n, AdjacencyMatrix* m)
{
	cout << "Bruteforce konstruktor\n";
	N = n;
	permutations = factorials[N];
	matrix = *m;
	vertices = new int [N];
	for (int i = 0; i < N; i++)
	{
		vertices[i] = i;
	}
	do {
		for (int i = 0; i < N; i++)
		{
			cout << vertices[i] << "  ";
		}
		cout << "\n";
	} while (std::next_permutation(vertices, vertices + N));
}
//------------------------------------------------------------------------------------------------------------------------------------
void Bruteforce::TSPBrute()
{
	do {
		sum = 0;

		for (int i = 0; i < N; i++)
		{
			//cout << vertices[i] << "  ";
			matrix.printAdjacencyMatrix();

		}
		cout << "\n";
	} while (std::next_permutation(vertices, vertices + N));
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