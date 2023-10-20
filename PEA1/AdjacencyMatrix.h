#pragma once
#include <fstream>

using namespace std;

class AdjacencyMatrix
{
	public:
		//AdjacencyMatrix();
		//virtual ~AdjacencyMatrix();

		void fillFromFile(fstream*);
		void printAdjacencyMatrix();

	private:
		int N;
		int** matrix;

		void createAdjacencyMatrix(int);
		void deleteAdjecencyMatrix();

};

