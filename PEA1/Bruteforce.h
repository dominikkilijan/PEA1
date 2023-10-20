#pragma once
#include "AdjacencyMatrix.h"

class Bruteforce
{
	public:
		Bruteforce(int, int**);
		long long int read_QPC();
		long double TSPBrute();
		unsigned long long factorials[21] = { 1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800, 39916800, 479001600, 
											6227020800, 87178291200, 1307674368000, 20922789888000, 355687428096000, 
											6402373705728000, 121645100408832000, 2432902008176640000};


	private:
		int* bestPath;
		int bestSum = 2147483647; // najwieksza dostepna wartosc
		int* currentPath;

		int* vertices;
		int N;
		unsigned long long permutations;

		int** matrix;


};

