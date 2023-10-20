#pragma once
#include "AdjacencyMatrix.h"

class Bruteforce
{
	public:
		Bruteforce(int, int**);
		long long int read_QPC();
		long double TSPBrute();

	private:
		int* bestPath;
		int bestSum = 2147483647; // najwieksza dostepna wartosc
		int* currentPath;

		int* vertices;
		int N;
		unsigned long long permutations;
		int** matrix;


};

